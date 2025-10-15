

int ft_isprint(int c){
	if(c >= 32 && c <= 126)
	   return 1;
	return 0;
}

// int main(void) {
//     // Testing a range of characters, including printable and non-printable ones
 
//     for (int i = 0; i < 128; i++) {  // Loop through all ASCII characters (0 to 127)
//         char ch = (char)i;

//         // Testing with custom ft_isprint function
//         if (ft_isprint(ch)) {
//             printf("ft_isprint: '%c' (ASCII %d) is printable.\n", ch, i);
//         } else {
//             printf("ft_isprint: '%c' (ASCII %d) is NOT printable.\n", ch, i);
//         }

//         // Testing with the original isprint function
//         if (isprint(ch)) {
//             printf("isprint: '%c' (ASCII %d) is printable.\n", ch, i);
//         } else {
//             printf("isprint: '%c' (ASCII %d) is NOT printable.\n", ch, i);
//         }

//         printf("\n");
//     }

//     return 0;
// }
