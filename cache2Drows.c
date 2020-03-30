

/* Name: Zach Huemann
 *
 */
int intArray[3000][500];

int  main() {

    for( int j = 0; j < 3000; j++) {
        for(int i = 0; i < 500; i++) {
            intArray[j][i] = i + j;
                
	}
    }
    return 0;

}
