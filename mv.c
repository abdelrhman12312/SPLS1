int mv_main(int argc, char *argv[]) {
    // Write your code here
    // Do not write a main() function. Instead, deal with mv_main() as the main function of your program.
if(argc != 3) {
        
        exit(-1);

    }
    else if(rename(argv[1], argv[2]) == -1){
        exit(-1);    
       
        
    }
    return 0;
}
