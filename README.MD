# Function description
----------------------------------------------------PART 1-------------------------------------------------------------

ft_atoi		: 	to convert str string to integer.

ft_bzero	:	to write 0 to string s by n bytes.

ft_calloc	:	to allocate size bytes memmory, the allocated memory is filled with size bytes zero(null) value.

ft_isalpha	:	to check wether a character is an alphabetic character (a-z, A-Z).

ft_isalnum	:	to check wether a character is an alphabet(a-z, A-Z, 0-9) or not.

ft_isascii	:	to check wether a character is an ASCII character 0 - 127 of ascii table
				(a-z, A-Z, 0-9, selection punctuation marks)
ft_isdigit	:	to check wether a characther is a digit number (0 - 9).

ft_isprint	:	to check wether a characther is a printable character (32 - 126)


ft_memchr	:	to find the first occurrence passing character in passing string and return a pointer to
				the index allocated

ft_memcmp	:	to	compare byte string s1 against byte string s2 until n bytes then return the first two diferring bytes

ft_memcpy	:	to copies n bytes from memory area src to memory area dst (overlap not protect)

ft_memmove	:	to copies n bytes from memory are src to memory area dst but overlap be protected in case
			len_dst > len_src the function copies memmory from the back (end of string) to the front (beginning) by n bytes

ft_memset	:	to wirtes len bytes of memory are src to memory area dst

ft_strlen	:	to find total lenght of the string.

ft_strlcpy	:	to copies up to dstsize - 1 char from string src to dst, NULL-terminate if dstize is not 0. then return
			len_src nomatter it success to copies or not.

ft_strlcat	:	to concatenate string src to the end of dst.It will appends at most dstsize - strlen(dst) - 1(it means
			available room for src). there is a few case :
			1.function can concatenate : dstsize > dst (there is available room for src)
				return len_dst + len_src.
			2.function can concatenate but string hass been truncated  : dstsize <= len_dst
				return dstsize + len_src.
			3.function can not concatenate : dstsize = 0 & dst = NULL (there is no room for src)
				return len_src.
			so function will return the total lenght of string it try to create.

ft_strchr	:	to find the first occurrence char 'c' in string 's' and return a pointer to the index allocated.

ft_strrchr	:	to find the last occurrence char 'c' in string 's' and return a pointer to the index allocated.



ft_strdup	:	to duplicate passing string 's1' to new created string and return new string.

ft_strncmp	:	to compare string s1 against string s2 not more than n charaters (char that appear after '\0' not compare)
			,the comparison is done using by unsigned char.Finally return an integer grather than, equal to or less than 0.

ft_strnstr	:	the function will search for 'needle' string in 'haystack' not more than 'len' characthers if it occurance
			function will allocate first chracthers index and return it.

ft_toupper	:	to convert passing 'c' character to upper case if it is lower case.

ft_tolower	:	to convert passing 'c' character to lowwer case if it is upper case.

----------------------------------------------------PART 2-------------------------------------------------------------
file descriptor (fd) :	0 = std input
						1 = std output
						2 = std error

ft_substr		: to allocate and return sub string from the string 's' ,The substring begins at index 'start' and maximum
				size 'len'.

ft_strjoin		: to concatenate string 's1' and 's2' in new created string then return new string.function will return
				NULL if it allocation fails.

ft_strtrim		: to copy string 's1' with the characters specified in 'set' removed from the beginning and the end of
				the string.

ft_split		: to split words from string 's' seperate by passing char 'c' and add thems to new 2D-array and return
				new 2D-array.

ft_itoa			: to convert int to string if integer is negative negative value malloc size + 2 for '-' sign and null.

ft_strmapi		: to create new string with iterate string 's' and applied function 'f' to each character of string 's'.
				Finally NULL-terminated and return new string.

ft_striter		: to iterate string 's' and applied function 'f' to  each chracter of string 's'.No return.

ft_putchar_fd	: to output the character 'c' to the given file descriptor('fd') with write(fd, &'c', 1);

ft_putstr_fd	: to output the string 's' to the given file descriptor('fd') with iterate write function.

ft_putendl_fd	: to output the string 's' the same as 'ft_putstr_fd' but follow by a newline.

ft_putnbr_fd	: to output the interger 'n' in every possible case of integer type variable to the give 'fd'.

----------------------------------------------------BONUS--------------------------------------------------------------

ft_lstnew		:	to duplicate new node with the same content as 'passing content' and next node pointer to null;

ft_lstadd_front :	to add the 'new node' to the beginning of 'the list' if it can(new node & list are not NULL)
				if neither 'new node' nor 'list' is NULL just creat a new single node.

ft_lstadd_back	:	to add the 'new node' to the end of 'the list' if it can (list is not NULL) if the 'list' is NULL
				just creat a new single node with passing node.

ft_lstsize		:	to count number of the nodes in a list.

ft_lstlast		:	to traverse through the list until the last node and return last node of the list.

ft_lstdelone	:	to	delete the node's content and free the node(the memory of 'next' must not be freed) if it can
				(lst is not null) if it cannot (neither lst is NULL or del function is NULL).

ft_lstclear		:	to traverse through the list and delete the node's content by using 'del' funtion and free the node
				if it can (lst is not NULL). Finally the ponter to the list must be set to NULL.

ft_lstiter		:	to iterate the 'list' and applied the function 'f' to the content of each node.


ft_lstmap		:	to iterate the list 'lst' and applied 'f' function to the content of each node('lst'), then creat
				a new list if  malloc return NULL(mean unsuccess allocated) then use 'del' function to delete the contents
				and free every nodes of lst then return NULL (because it means the function is failed to create full of
				list 'lst'), if it success just return the new list.
