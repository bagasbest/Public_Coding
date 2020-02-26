// merupakan library yang memuat library - library standar
#include <bits/stdc++.h> 
using namespace std; 

  
// fungsi untuk menyatakan baris dan kolom pada magic puzzle

void buatMatriks(int n){  

    int magicSquare[n][n];  

    // pada awal tahapan set semua elemen 0, memset adalah cara umum untuk mengatur wilayah memori ke-0 terlepas dari tipe datanya. 
    memset(magicSquare, 0, sizeof(magicSquare));  

    // Inisialisasi awal untuk angka
    int x = n/2; 
    int y = n-1;  

    // masukkan angka yang memungkinkan pada magic puzzle secara bertahap  
    for (int num = 1; num <= n*n;){
    	
		//iterasi ketiga  
        if (x == -1 && y == n){  
            y = n-2; 
            x = 0;  

        }else{  

            // masuk sisi kanan persegi
            if (y == n)  
                y = 0;  

            // masuk sisi atas persegi
            if (x < 0)  
                x = n - 1;  
        } 
		 
		// iterasi kedua
        if (magicSquare[x][y]){  
            y -= 2;  
            x++;  
            continue;  
        }else
            magicSquare[x][y] = num++; 
        
        // iterasi ketiga
        y++; x--; 
    }  

    // Cetak hasil pada konsol  
    cout<<"Jumlah n, vertikal, horizontal, diagonal = "<<n*(n*n+1)/2<<":\n\n";  

    	for (x = 0; x < n; x++)  {  
        	cout<<"\t"; for (y = 0; y < n; y++)  
							cout<<magicSquare[x][y]<<" ";  
        					cout<<endl; 
    	}  
}  

  
// program utama 
int main(){  

    int n; // banyaknya baris dan kolom contoh n=3, berarti 3 baris, 3 kolom
    
    cout<<"Masukkan jumlah n : ";
    cin >> n;
    
     buatMatriks (n); 
    return 0;  
}  


