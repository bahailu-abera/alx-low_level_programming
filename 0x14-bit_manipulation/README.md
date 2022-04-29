#### Bitwise Operators:

Bitwise operators works on bits and perform bit by bit operation


| operator     | Decription                                          |                                                      |
| -------------| ---------------------------------------------       | ------------------------------------------           |
| &            | Binary AND Operator copies a bit to the result if it exists in both operands. | (1111) & (0000) = (0000)   |
| \|            | Binary OR Operator copies a bit if it exists in eather operand. | (1111 \| (0000)) = (1111)                 |
| ^            | Binary XOR Operator copies the bit if it is set in one operand but not both. | (1111) ^ (0001) = (1110)    |
| ~            | Binary Ones Complement Operator is unary and has the efect of 'flipping' bits. | ~(1010) = (0101)          |
| <<           | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. | (0011) << 2 = (1100)|
| >>           | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.  | (1100) >> 2 = (0011) |



reference for the files with decriptions is here below.


| file name        | Description                                       |
| ---------------- | ------------------------------------------------  |
| 0-binary_to_uint.c | a function that converts a binary number to an unsigned int. |
| 1-print_binary.c  | a function that prints the binary representation of a number. |
| 2-get_bit.c       | a function that returns the value of a bit at a given index. | 
| 3-set_bit.c      |  a function that sets the value of a bit to 1 at a given index. |  
| 4-clear_bit.c      | a function that sets the value of a bit to 0 at a given index.|
|5-flip_bits.c   |a function that returns the number of bits you would need to flip to get from one number to another. |
|100-get_endianness.c |  a function that checks the endianness.||101-password   | Find the password for a program. |


