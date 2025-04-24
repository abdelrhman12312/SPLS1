
int echo_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with echo_main() as the main function of your program
    int i = 1; 
    while (argc > i) {
         printf("%s", argv[i]);
        
            if(i == (argc-1))
            {
                // do nothing    
            }
            else  printf(" ");
                i++;
    }
    printf("\n");
    return EXIT_SUCCESS;
}
