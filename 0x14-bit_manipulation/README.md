Write a function that converts a binary number to an unsigned int. Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred
5. Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators
