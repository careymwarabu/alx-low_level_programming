#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_indent);
void print_magic(unsigned char *e_indent);
void print_class(unsigned char *e_indent);
void print_data(unsigned char *e_indent);
void print_version(unsigned char *e_indent);
void print_abi(unsigned char *e_indent);
void print_osabi(unsigned char *e_indent);
void print_type(unsigned int e_type, unsigned  char *e_indent);
void print_entry(unsigned long int e_entry,unsigned  char *e_indent);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
