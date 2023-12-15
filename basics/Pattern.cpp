#include<bits/stdc++.h>
using namespace std ;

void pattern1(int n) {
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for(int i=1 ; i<=n ; i++) {
        for(int j=0 ; j<i ; j++) {
            cout << "* " ;
        }
        cout << endl;
    }
}
void pattern3(int n) {
    for( int i=1 ; i<=n ; i++ ) {
        int count = 1 ;
        for( int j=0 ; j<i ; j++ ) {
            cout << count << " " ;
            count++ ;
        }
        cout << endl;
    }
}
void pattern4(int n) {
    for ( int i=1 ; i<=n ; i++ ) {
        for ( int j=0 ; j<i ; j++ ) {
            cout << i << " " ;
        }
        cout << endl;
    }
}
void pattern5(int n) {
    for ( int i=1 ; i<=n ; i++ ) {
        for ( int j=0 ; j<(n-i+1) ; j++ ) {
            cout << "*" << " " ;
        }
        cout << endl;
    }
}
void pattern6(int n) {
    for ( int i=1 ; i<=n ; i++ ) {
        for ( int j=1 ; j<=n-i+1 ; j++ ) {
            cout << j << " " ;
        }
        cout << endl;
    }
}
void pattern7(int n) {

    for( int i=1 ; i<=n ; i++ ) {
        //space
        for(int j=1 ; j<= n-i ; j++) {
            cout << "-" ;
        }

        //star
        for( int j=1 ; j<=2*i-1 ; j++) {
            cout << "*" ;
        }
        //space
        for(int j=1 ; j<=n-i ; j++) {
            cout << "-" ;
        }
        cout << endl;
    }
}
void pattern8(int n) {
    for( int i=1 ; i<=n ; i++) {
        // space
        for(int j=1 ; j<i ; j++) {
            cout << "-" ;
        }
        // star
        for(int j=1 ; j<=2*(n-i)+1 ; j++) {
            cout << "*" ;
        }
        // space
        for(int j=1 ; j<i ; j++) {
            cout << "-" ;
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for(int i=1 ; i<=n ; i++) {
        //space
        for(int j=1 ; j<=n-i ; j++) {
            cout << " ";
        }
        //star
        for(int j=1 ; j<=2*i-1 ; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1 ; i<=n ; i++) {
        //space
        for(int j=1 ; j<i ; j++) {
            cout << " " ;
        }
        //star
        for(int j=1 ; j<=2*(n-i)+1 ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
void pattern10(int n) {
    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n-i  ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
void pattern11(int n) {
    for(int i=0 ; i<n ; i++) {
        int start = 1 ;
        if(i%2 == 0) start = 1; 
        else start = 0 ;
        for(int j=0 ; j<=i ; j++) {
            cout << start ;
           start = 1 - start ; 
        }
        cout << endl;
    }
}
void pattern12(int n) {
    for(int i=1 ; i<=n ; i++) {
        
        for(int j=1 ; j<=i  ; j++ ) {
            cout << j ;
        }
        for(int j=1 ; j<2*(n-i) ; j++) {
            cout << " " ;
        }
        for(int j=1 ; j<=i ; j++) {
            cout << i-j+1 ;
        }
        cout << endl;
    }
}
void pattern13(int n) {
    int num =1 ; // starting number
    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout << num << " ";
            num++ ;
        }
        cout << endl;
    }
}
void pattern14(int n) {
    for(int i=1 ; i<=n ; i++ ) {
    char ch = 65  ; // starting A
        for(int j=1 ; j<=i ; j++) {
            cout << ch << " ";
            ch++ ;
        }
        cout << endl;
    }
}
void pattern15(int n) {
    for(int i=1 ; i<=n ; i++) {
        char ch = 65 ;
        for(int j=1 ; j<=n-i+1 ; j++) {
            cout << ch << " " ;
            ch++ ;
        }
        cout << endl;
    }
}
void pattern16(int n) {
    char ch = 'A' ;
    for(int i=1; i<=n ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout << ch << " " ;
        }
        ch++ ;
        cout << endl;
    }
}
void pattern17(int n) {
    for(int i=1 ; i<=n ; i++) {
        //spaces
        for(int j=1 ; j<=n-i ; j++) {
            cout << "-" ;
        }
        //chars
        char ch = 'A' ;
        int breakpoint = (2*i-1)/2 ; 
        for(int j=1 ; j<=2*i-1 ; j++) {
            cout << ch ;
            if(j<= breakpoint) ch++ ;
            else ch-- ;
        }
        cout << endl;
    }
}
void pattern18(int n) {
    
}
void pattern19(int n) {
    for(int i=0 ; i<n ; i++) {
        //star
        for(int j=0 ; j<n-i ; j++) {
            cout << "*" ;
        }
        //space
        for(int j=0 ; j<2*i ; j++) {
            cout << " " ;
        }
        //star
        for(int j=0 ; j<n-i ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i=1 ; i<=n ; i++) {
        //star
        for(int j=1; j<=i ; j++) {
            cout << "*" ;
        }
        //space
        for(int j=1 ; j<=2*(n-i) ; j++) {
            cout << " ";
        }
        //star
        for(int j=1 ; j<=i ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
void pattern20(int n) {
    for(int i=1 ; i<=n ; i++) {
        //star
        for(int j=1 ; j<=i  ; j++) {
            cout << "*" ;
        }
        //space
        for(int j=1 ; j<=2*(n-i) ; j++) {
            cout << " " ;
        }
        //star
        for(int j=1 ; j<=i ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    for(int i=1 ; i<=n ; i++) {
        //star
        for(int j=1 ; j<=n-i+1  ; j++) {
            cout << "*" ;
        }
        //space
        for(int j=1 ; j<=2*(i-1) ; j++) {
            cout << " " ;
        }
        //star
        for(int j=1 ; j<=n-i+1 ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}

int main() {
    pattern18(5) ;
    // pattern 18,21,22 are still left ;-;
    return 0 ;
}