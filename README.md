# get_next_line

**A C function that reads any valid file line by line until the end.**

## Foreword

Get_next_line is a programming assignment for first year students at Academy+Plus.

Get_next_line will allow you to read a line ending with a newline character from a file descriptor, similarly to the getline(3) function.

Disclaimer: *There [are][1] [so][2] [many][3] [easier][4] methods of doing this by using standard C functions. But the goal here is to be able to do it by using any functions from my [libft][5] and only the standard functions `read`, `malloc` and `free`.*

## Contributing

Do report bugs, and raise issues and pull requests as you see fit. Improvements to make the code more concise/efficient/elegant are welcome. Thanks!

## Usage

Clone and open the directory.
Compile with `make -C libft/ fclean && make -C libft/`. Then:

`clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c`

`clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c`

`clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft`

## License

[MIT © Cristian Opran.](https://github.com/cristianopran/get_next_line/blob/master/LICENSE)

[1]: http://stackoverflow.com/questions/3501338/c-read-file-line-by-line
[2]: http://stackoverflow.com/questions/2372813/reading-one-line-at-a-time-in-c
[3]: http://stackoverflow.com/questions/9206091/going-through-a-text-file-line-by-line-in-c
[4]: https://linux.die.net/man/3/getline
[5]: https://github.com/cristianopran/libft
