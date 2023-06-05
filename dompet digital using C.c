#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h> 

int main(){
	int pil, kembali, saldo = 0, nminal, nmr, x , n = 10000000000, pin, bayar, f;
	char NmaBnk, Donasi;
    awal :
    	printf("\t\t==================================\n");
        printf("\t\t=Selamat datang di Dompet Digital=\n");
        printf("\t\t==================================\n");
        printf("\t\tMasukkan Pin Anda : ");
        scanf("%d",&pin);
        if(pin==123456){
	menu:
		printf("\t\t=============TOO PAY==============\n");
		printf("\t\t==================================\n");
		printf("\n");
		printf("\t\t\tSALDO ANDA : Rp. %d\n", saldo);
		printf("\n");
		printf("\t\t=========TENTUKAN PILIHAN=========\n");
		printf("\n");
        printf("\t\t1. TOP-UP\n");
        printf("\n");
		printf("\t\t2. PULSA\n");
		printf("\n");
		printf("\t\t3. TRANSFER\n");
		printf("\n");
		printf("\t\t4. TAGIHAN LISTRIK\n");
		printf("\n");
		printf("\t\t5. TAGIHAN PDAM\n");
		printf("\n");
		printf("\t\t6. BAYAR PAJAK KENDARAAN\n");
		printf("\n");
		printf("\t\t7. DONASI\n");
		printf("\n");
		printf("\t\t8. ASURANSI\n");
		printf("\n");
		printf("\t\tMasukan pilihan = "); 
	scanf ("%d", &pil);
		printf("\t\t==========================================\n");

	switch(pil){
    case 1: 
        printf("\t\tMASUKKAN NAMA BANK / AGENT YANG DIGUNAKAN UNTUK TOP UP\n");
		printf("\t\t= ");
        scanf ("\t\t%s",&NmaBnk);
        printf("\t\tMASUKAN NOMINAL TOP-UP Rp.");
		scanf ("\t\t%d", &nminal);
		printf("\n");
		srand((unsigned)time(NULL));
		x = rand()%n;
		printf("\t\t==========================================\n");
		printf("\t\tKode pembayaran : %d\n",x);
		printf("\t\t==========================================\n");
		printf("\n");
		printf("\t\tSILAHKAN BAYAR BIAYA TOP UP SEBESAR Rp.%d\n", nminal);
		printf("\t\tPADA M-BANKING ATAU AGENT TEMPAT ANDA TOP UP\n");
		printf("\n");
		getch(); 

		//pengurangan saldo
		saldo = saldo + nminal;
		printf("\t\t==========================================\n");
		printf("\t\t     BERHASIL! SALDO ANDA Rp.%d \n", saldo);
		printf("\t\t==========================================\n");
        printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
		scanf("%d",&kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
        }
		else if (kembali == 2) {
			system("cls");
			goto keluar;
		}
	case 2:
		printf("\t\tMASUKAN NOMOR: ");
		scanf("%d", &nmr);
		printf("\t\t==========================================\n");
		printf("\t\tMASUKAN NOMINAL Rp. ");
		scanf("%d", &nminal);
		printf("\n");

		//pengurangan saldo
		printf("\t\tApakah anda ingin mengisi pulsa sebesar : Rp.%d? \n", nminal);
		printf("\t\tBIAYA ADMIN Rp.1000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= nminal + 1000) {
				saldo = saldo - nminal - 1000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d \n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI \n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}
		printf("\n");	
        printf("\n");	
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
		scanf("%d",&kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}
 	case 3:
		printf("\t\tMASUKAN NAMA BANK TUJUAN :");
		scanf("%s",&NmaBnk);
		printf("\t\tMASUKAN NOMOR REKENING:");
		scanf("%d",&nmr);
		printf("\t\tMASUKAN NOMINAL : Rp. ");
		scanf("%d",&nminal);
		printf("\n");

		//pengurangan saldo
		printf("\t\tApakah anda ingin mentranfer sebesar : Rp.%d? \n", nminal);
		printf("\t\tBIAYA ADMIN Rp.3000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= nminal + 3000) {
				saldo = saldo - nminal - 3000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d\n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI\n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}

		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
		scanf("%d", &kembali);
		if (kembali == 1) {
			system("cls");
			goto menu;
		}
		else if (kembali == 2) {
			system("cls");
			goto keluar;
		}

	case 4:
		printf("\t\tMASUKAN NOMER PELANGGAN  :");
		scanf ("\t\t%d", &nmr);
		x = rand()%n;
		printf("\t\tBIAYA TAGIHAN LISTRIK ANDA SEBESAR :Rp. %d\n",x);
		printf("\n");

		//pengurangan saldo
		printf("\t\tApakah anda ingin membayar tagihan listrik sebesar : Rp.%d?\n", x);
		printf("\t\tBIAYA ADMIN Rp.5000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= x + 5000) {
				saldo = saldo - x - 5000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d\n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI\n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}
		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
        scanf("%d", &kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}

	case 5:
		printf("\t\tMASUKAN NOMER PELANGGAN  :");
		scanf("%d", &nmr);
	    x = rand()%n;
		printf("\t\tBIAYA TAGIHAN PDAM ANDA SEBESAR :Rp. %d\n",x);
		printf("\n");

		//pengurangan saldo
		printf("\t\tApakah anda ingin membayar tagihan PDAM sebesar : Rp.%d?\n", x);
		printf("\t\tBIAYA ADMIN Rp.5000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= x + 5000) {
				saldo = saldo - x - 5000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d\n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI\n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}
		
		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
        scanf("%d", &kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}
	case 6:
		printf("\t\tMAAF LAYANAN BELUM TERSEDIA UNTUK SAAT INI!\n");
		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
		scanf("%d", &kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}
	case 7:
		printf("\t\tCARI YANG INGIN KAMU BANTU : ");
        scanf ("\t\t%s",&Donasi);
		printf("\t\tMASUKKAN NOMINAL BIAYA YANG INGIN DI DONASI : ");
		scanf("\t\t%d", &nminal);
		printf("\n");

		//pengurangan saldo
		printf("\t\tApakah anda ingin donasi sebesar : Rp.%d?\n", nminal);
		printf("\t\tBIAYA ADMIN Rp.2000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= nminal + 2000) {
				saldo = saldo - nminal - 2000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d\n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI\n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}

		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
        scanf("%d", &kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}
	case 8:
		printf("\t\tMASUKKAN NAMA PERUSAHAAN ASURANSI  :");
        scanf ("\t\t%s",&NmaBnk);
		printf("\t\tINPUT NOMOR POLIS / ASURANSI/ NOMOR KLAIM  :");
        scanf ("\t\t%d",&nmr);
	    x = rand()%n;
		printf("\t\tBIAYA TAGIHAN ASURANSI ANDA SEBESAR :Rp. %d\n",x);
		printf("\n");
		
		//pengurangan saldo
		printf("\t\tApakah anda ingin membayar tagihan listrik sebesar : Rp.%d?\n", x);
		printf("\t\tBIAYA ADMIN Rp.3000\n");
		printf("\n");
		printf("\t\t1. YA   2.Tidak\n");
		printf("\t\tPilihan : ");
		scanf("%d",&f);
		if (f == 1){
			if (saldo >= x + 3000) {
				saldo = saldo - x - 3000;
				printf("\t\t==========================================\n");
				printf("\t\t  BERHASIL! SISA SALDO ANDA : Rp. %d\n", saldo);
				printf("\t\t==========================================\n");
			}
			else {
				printf("\t\t==========================================\n");
				printf("\t\t     GAGAL! SALDO ANDA TIDAK MENCUKUPI\n");
				printf("\t\t==========================================\n");
			}
		}
		else if (f == 2){
			goto menu;
		}

		printf("\n");
		printf("\n\t\tTEKAN 1 UNTUK KEMBALI KE MENU UTAMA, TEKAN 2 UNTUK KELUAR\n");
        printf("\n");
        printf("\t\tPilihan : ");
        scanf("%d", &kembali);
		if (kembali == 1){
			system("cls");
			goto menu;
		}
		else if(kembali == 2){
			system("cls");
			goto keluar;
		}
	}

    }else{
        system("cls");
        printf("\nPIN YANG ANDA MASUKAN SALAH!!\n");
        goto awal;
    }
	keluar :
	
	return 0;
}
