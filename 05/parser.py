def line_to_pair_of_pair(line):
    line = line.replace('\n', '')
    ret_str = 'pair<Point, Point>{'
    ret_str += ','.join(f'{{{item}}}' for item in line.split(' -> '))
    ret_str += '}'
    return ret_str

if __name__ == '__main__':
    with open('/home/boris/advent_of_code/05/test_input.txt', 'r') as infi:
        input = infi.readlines()
    lines = ',\n'.join(map(line_to_pair_of_pair, input))
    return_string = ('#include <utility>'
                    '\n'
                    '#include <vector>'
                    '\n'
                    '#include "point.h"'
                    '\n'
                    'namespace aoc5{'
                    '\n'
                    '\n'
                    'using std::pair;'
                    '\n'
                    'static const std::vector input{'
                    '\n'
                    f'{lines}'
                    '\n'
                    '};'
                    '\n'
                    '}'
                    )
    with open('/home/boris/advent_of_code/05/test_input.h', 'w') as cfile:
        cfile.write(return_string)
