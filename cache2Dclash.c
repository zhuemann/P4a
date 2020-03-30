
/* Name: Zach Huemann
 *
 */
int intArr[128][8];

int main() {
    for (int k = 0; k < 100; k++) {
        for (int j = 0; j < 128; j = j + 64) {
            for( int i = 0; i < 8; i++) {
                intArr[j][i] = i + j + k;
            }
        }
    }
    return 0;
}

