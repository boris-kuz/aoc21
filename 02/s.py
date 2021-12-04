from typing import *
from functools import reduce
from dataclasses import dataclass

def forward(pos, num):
    pos.horizontal += num
    pos.depth += (num * pos.aim)

def down(pos, num):
    pos.aim += num

def up(pos, num):
    pos.aim -= num

operations = {
        'forward' : forward
        , 'down' : down
        , 'up' : up
        }

def tokenize(instructions : List[str]):
    return [(operations[instruction.split()[0]], int(instruction.split()[1])) for instruction in instructions]

@dataclass
class Position:
    horizontal : int = 0
    depth : int = 0
    aim : int = 0

if __name__ == "__main__":
    if False:
        instructions = [
                "forward 5"
                ,"down 5"
                ,"forward 8"
                ,"up 3"
                ,"down 8"
                ,"forward 2"
                ]
    else:
        with open('input', 'r') as file:
            instructions = file.readlines()
    
    pos = Position()

    tokenized_instructions = tokenize(instructions)
    
    for instruction in tokenized_instructions:
        func, num = instruction
        func(pos, num)

    print(pos.horizontal * pos.depth)
