def to_std_vector(input, name):
    return f"static const std::vector {name} {{{input}}};"

def boards_parser(martrices, name):
    boards = []
    for matrix in martrices:
        boards.append('{' + ',\n'.join(f"{{{','.join(line.split())}}}" for line in matrix) + '}')
    boards_str = ',\n'.join(boards)
    return f'''
static const std::vector<std::vector<std::vector<int>>> {name} {{
{boards_str}}};
    '''

if __name__ == "__main__":
    with open('04/test_input.txt', 'r') as f:
        input_file = f.read().split('\n\n')
    input_numbers = input_file[0]
    boards = [board.split('\n') for board in input_file[1:]]
    boards[-1] = boards[-1][:-1] #drop last newline

    boards_str = boards_parser(boards, 'matrices')
    input_numbers_str = to_std_vector(input_numbers, 'input_numbers')

    input_header_cpp = ('#include <vector>'
                        '\n'
                        'namespace aoc4 {'
                        '\n'
                        f'{input_numbers_str}'
                        '\n'
                        f'{boards_str}'
                        '\n'
                        '}'
                        )
    with open('04/test_input.h', 'w') as input_file:
        input_file.write(input_header_cpp)
