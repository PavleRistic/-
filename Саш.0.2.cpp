#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<string.h>
#include<time.h>
G(int h[]){int b=0,g=0;while(b<64){h[b]=0;b++;}}
A(){int b=0,g=0;while(b<64){if(b%8==0)printf("\n");g=6;if(b%2==0&&b%16<8||b%2==1&&b%16>8)g+=240;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),g);printf(" %d ",abs(b-63)/8+11+b%8*10);b++;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);}}
main(){srand(time(0));int p=0,s[99],u=0,a[64],z[64],v[89],g,t[89],b=0,c=0,d=0,j,f=0,o=1,e=0,h[99];char r[99],R[99],q[99],Q[99],k[99],V[9];strcpy(k,"i je na potezu.");strcpy(r,"i je napravio gresku i zato mora da ponovi potez.");strcpy(R,"i je odigrao ");strcpy(q," sa polja ");strcpy(Q," na polje ");system("Color 60");
goto B; J:b=0;f=0;
while(b<64){s[b]=0;h[b]=0;c=b;//if(a[v[t[c]+10]]=='K')s[c]=1;(((a[v[t[c]+11]]=='p'||a[v[t[c]-9]]=='p')&&(z[v[t[c]+11]]==1||z[v[t[c]-9]]==1))||((a[v[t[c]-11]]=='p'||a[v[t[c]+9]]=='p')&&(z[v[t[c]-11]]==2||z[v[t[c]+9]]==2))||a[v[t[c]-8]]=='s'||a[v[t[c]+12]]=='s'||a[v[t[c]+21]]=='s'||a[v[t[c]-19]]=='s'||a[v[t[c]+8]]=='s'||a[v[t[c]-12]]=='s'||a[v[t[c]-21]]=='s'||a[v[t[c]+19]]=='s'||a[v[t[c]+1]]=='K'||a[v[t[c]-1]]=='K'||a[v[t[c]-9]]=='K'||a[v[t[c]+9]]=='K'||a[v[t[c]-11]]=='K'||a[v[t[c]+11]]=='K'||a[v[t[c]-10]]=='K')
while(d<64){
if(a[c]=='p'&&(z[c]==1)&&(t[c]==t[d]-11||t[c]==t[d]+9))s[d]+=1;
else if(a[c]=='p'&&(z[c]==2))s[d]+=1;/*&&(t[c]==t[d]+1||(t[c]==t[d]+2&&t[c]%10==7&&a[v[t[d]+1]]==' ')||t[c]==t[d]+11||t[c]==t[d]-9)*/
/*else if(a[c]=='T'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10))s[d]+=1;
else if(a[c]=='l'&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))s[d]+=1;
else if(a[c]=='D'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10||abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))s[d]+=1;
else if(a[c]=='s'&&(t[c]==t[d]+8||t[c]==t[d]-12||t[c]==t[d]-21||t[c]==t[d]+29||t[c]==t[d]-8||t[c]==t[d]+12||t[c]==t[d]+21||t[c]==t[d]-29))s[d]+=1;
else if(a[c]=='K'&&(t[c]==t[d]+1||t[c]==t[d]-1||t[c]==t[d]-10||t[c]==t[d]+10||t[c]==t[d]-11||t[c]==t[d]+11||t[c]==t[d]-9||t[c]==t[d]+9||(t[c]==t[d]+20&&a[v[t[c]-10]]==' '&&o!=-9)||(t[c]==t[d]-20&&a[v[t[c]+10]]==' '&&o!=-9)))s[d]+=1;
j=t[c];if(((a[c]=='T'||a[c]=='D')&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10)))while(j!=t[d]){if(t[c]%10==t[d]%10)j=j+10*(t[d]-t[c])/abs(t[d]-t[c]);if(t[c]/10==t[d]/10)j=j+1*(t[d]-t[c])/abs(t[d]-t[c]);if(a[v[j]]!=' ')break;}
else if(((a[c]=='l'||a[c]=='D')&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10))))while(j!=t[d]){if((abs((t[c]+9)/10-t[d]%10)==abs(t[d]/10-(t[c]+9)%10)))j=j+9*(t[d]-t[c])/abs(t[d]-t[c]);else{j=j+11*(t[d]-t[c])/abs(t[d]-t[c]);}if(a[v[j]]!=' '&&j!=t[d])break;}
*/d++;}d=0;b++;}printf("Provera.");scanf("%d",&c); c=v[c];
while(s[99]!=9&&s[99]!=8){a: b=0;if(o>63)while(b<64){if(b%8==0)printf("\n");
g=6;if(z[b]==1)g=9;if(z[b]==2)g=12;
if(b%2==0&&b%16<8||b%2==1&&b%16>8)g+=240;
if(b%8==0){f=b-16;while(f!=b){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);if(f==b-8)printf("\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),g);if(a[b]==' ')printf("               ");else{printf("               ");}if(g>200)g=6;else{g=240;}f++;}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);printf("\n");}
g=6;if(z[b]==1)g=9;if(z[b]==2)g=12;
if(b%2==0&&b%16<8||b%2==1&&b%16>8)g+=240;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),g);printf("      %c %d %d    ",a[b],h[b],s[b]);b++;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);
if(b%8==0&&b!=0){printf("\n");f=b-16;while(f!=b){if(f==b-8)printf("\n");if(g>200)g=6;else{g=240;}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),g);printf("               ");f++;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);}}
d++;if(o>63){printf("\n");scanf("%d",&c);c=v[c];o=0;d=0;G(h);}
if(a[c]=='p'&&((t[c]==t[d]+2&&t[c]%10==7&&a[v[t[d]+1]]==' ')||(t[c]==t[d]-2&&t[c]%10==2&&a[v[t[d]-1]]==' ')))u=t[d];
if(a[c]=='p'&&(z[c]==1)&&(t[c]==t[d]-1||(t[c]==t[d]-2&&t[c]%10==2&&a[v[t[d]-1]]==' ')||(t[c]==t[d]-11&&a[d]!=' '||t[c]==t[d]+9&&a[d]!=' ')))h[d]=1;else if(a[c]=='p'&&(z[c]==2)&&(t[c]==t[d]+1||(t[c]==t[d]+2&&t[c]%10==7&&a[v[t[d]+1]]==' ')||(t[c]==t[d]+11&&a[d]!=' '||t[c]==t[d]-9&&a[d]!=' ')))h[d]=1;else if(a[c]=='T'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10))h[d]=1;else if(a[c]=='l'&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))h[d]=1;else if(a[c]=='D'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10||abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))h[d]=1;else if(a[c]=='s'&&(t[c]==t[d]+8||t[c]==t[d]-12||t[c]==t[d]-21||t[c]==t[d]+29||t[c]==t[d]-8||t[c]==t[d]+12||t[c]==t[d]+21||t[c]==t[d]-29))h[d]=1;else if(a[c]=='K'&&(t[c]==t[d]+1||t[c]==t[d]-1||t[c]==t[d]-10||t[c]==t[d]+10||t[c]==t[d]-11||t[c]==t[d]+11||t[c]==t[d]-9||t[c]==t[d]+9||(t[c]==t[d]+20&&a[v[t[c]-10]]==' '&&o!=-9)||(t[c]==t[d]-20&&a[v[t[c]+10]]==' '&&o!=-9)))h[d]=1;
b=0;j=t[c];if((a[c]=='T'||a[c]=='D'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10))&&g==1)while(j!=t[d]){if(t[c]%10==t[d]%10)j=j+10*(t[d]-t[c])/abs(t[d]-t[c]);if(t[c]/10==t[d]/10)j=j+1*(t[d]-t[c])/abs(t[d]-t[c]);if(a[v[j]]!=' ')b=1;}//if((z[c]==0||z[c]==z[d]||b==1))h[d]=0;
else if((a[c]=='l'||a[c]=='D'&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))&&g==1)while(j!=t[d]){if((abs((t[c]+9)/10-t[d]%10)==abs(t[d]/10-(t[c]+9)%10)))j=j+9*(t[d]-t[c])/abs(t[d]-t[c]);else{j=j+11*(t[d]-t[c])/abs(t[d]-t[c]);}if(a[v[j]]!=' '&&j!=t[d])b=1;}o++;}
B:printf("Dobrodosli u sah.Prosirite prozor na ceo ekran.\nAko zelite da vidite brojeve table pritisnite 1.\n");scanf("%d",&c);if(c==1)A();printf("\nAko zelite da igrate protiv racunara pritisnite 1.\n");scanf("%d",&c);if(c==1)o*=7;printf("\nIzaberite vrstu saha\n1.obican sah\n2.sak\n");scanf("%d",&c);if(c==2)o*=11;printf("\nAko zelite brzo upisivanje poteza pritisnite 1.\n");scanf("%d",&c);if(c==1)f=1100;system("cls");
while(b<64){z[b]=0;v[abs(b-63)/8+11+b%8*10]=b;t[b]=abs(b-63)/8+11+b%8*10;if(b>47)z[b]=1;if(b<16)z[b]=2;
if(b>15&&b<48)a[b]=' ';else if(b-8>-1&&b-8<8||b-48>-1&&b-48<8)a[b]='p';
else if(b==0||b==7||b==56||b==63)a[b]='T';else if(b==1||b==6||b==57||b==62)a[b]='s';
else if(b==2||b==5||b==58||b==61)a[b]='l';else if(b==3||b==59)a[b]='D';else if(b==4||b==60)a[b]='K';b++;}if(c==7)goto J;b=0;if(o%11==0)while(b<64){if(b>15&&b<48)a[b]=' ';else if(b==4||b==60)a[b]='K';else{a[b]='s';}b++;}printf("Bel%s",k);
while(g<999){f++; y: b=0;while(b<64&&(o%7!=0||f%2!=0)){if(b%8==0)printf("\n");g=6;if(z[b]==1)g=9;if(z[b]==2)g=12;
if(b%2==0&&b%16<8||b%2==1&&b%16>8)g+=240;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),g);printf(" %c ",a[b]);b++;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);}b=0;
printf("\n");q:if(o%7==0&&f%2==0){b=0;g=0;c=(rand()%(88))+1;d=(rand()%(88))+1;if(c%10==0||c%10==9||c<11||d%10==0||d%10==9||d<11)goto q;}else if(f<1000)scanf("%d%d",&c,&d);else{scanf("%d",&c);d=c%100;c=c/100;}if(c==1)goto J;c=v[c];d=v[d];if(o%7!=0||f%2!=0)system("cls");j=t[c];
if(a[c]=='p'&&((t[c]==t[d]+2&&t[c]%10==7&&a[v[t[d]+1]]==' ')||(t[c]==t[d]-2&&t[c]%10==2&&a[v[t[d]-1]]==' ')))u=t[d];
if(a[c]=='p'&&(z[c]==1)&&(t[c]==t[d]-1||(t[c]==t[d]-2&&t[c]%10==2&&a[v[t[d]-1]]==' ')||(t[c]==t[d]-11&&a[d]!=' '||t[c]==t[d]+9&&a[d]!=' ')||((t[c]==t[d]-11&&a[d]==' '||t[c]==t[d]+9&&a[d]==' ')&&(u==t[d]-1||u==t[d]+1)&&(a[v[t[d]-1]]=='p'||a[v[t[d]+1]]=='p'))))g=1;
else if(a[c]=='p'&&(z[c]==2)&&(t[c]==t[d]+1||(t[c]==t[d]+2&&t[c]%10==7&&a[v[t[d]+1]]==' ')||(t[c]==t[d]+11&&a[d]!=' '||t[c]==t[d]-9&&a[d]!=' ')))g=1;
else if(a[c]=='T'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10))g=1;
else if(a[c]=='l'&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))g=1;
else if(a[c]=='D'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10||abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10)))g=1;
else if(a[c]=='s'&&(t[c]==t[d]+8||t[c]==t[d]-12||t[c]==t[d]-21||t[c]==t[d]+19||t[c]==t[d]-8||t[c]==t[d]+12||t[c]==t[d]+21||t[c]==t[d]-19))g=1;
else if(a[c]=='K'&&z[c]!=z[d]&&(t[c]==t[d]+1||t[c]==t[d]-1||t[c]==t[d]-10||t[c]==t[d]+10||t[c]==t[d]-11||t[c]==t[d]+11||t[c]==t[d]-9||t[c]==t[d]+9||(t[c]==t[d]+20&&a[v[t[c]-10]]==' '&&o!=-9)||(t[c]==t[d]-20&&a[v[t[c]+10]]==' '&&o!=-9))){g=1;if(a[c]==a[v[51]]&&a[d]==a[v[71]]&&o%2!=0&&o%19!=0){a[v[81]]=' ';a[v[61]]='T';z[v[81]]=0;z[v[61]]=1;}else if(a[c]==a[v[51]]&&a[d]==a[v[31]]&&o%2!=0&&o%17!=0){a[v[11]]=' ';a[v[41]]='T';z[v[11]]=0;z[v[41]]=1;}else if(a[c]==a[v[58]]&&a[d]==a[v[38]]&&o%13!=0&&o%23!=0){a[v[18]]=' ';a[v[48]]='T';z[v[18]]=0;z[v[48]]=2;}else if(a[c]==a[v[58]]&&a[d]==a[v[78]]&&o%13!=0&&o%29!=0){a[v[88]]=' ';a[v[68]]='T';z[v[88]]=0;z[v[68]]=2;}else{g=0;}}
if((a[c]=='T'||(a[c]=='D'&&(t[c]%10==t[d]%10||t[c]/10==t[d]/10)))&&g==1)while(j!=t[d]){if(t[c]%10==t[d]%10)j=j+10*(t[d]-t[c])/abs(t[d]-t[c]);if(t[c]/10==t[d]/10)j=j+(t[d]-t[c])/abs(t[d]-t[c]);if(a[v[j]]!=' '&&j!=t[d])b=1;}
if((a[c]=='l'||(a[c]=='D'&&(abs(t[c]/10-t[d]/10)==abs(t[d]%10-t[c]%10))))&&g==1)while(j!=t[d]){if((abs((t[c]+9)/10-t[d]%10)==abs(t[d]/10-(t[c]+9)%10)))j=j+9*(t[d]-t[c])/abs(t[d]-t[c]);else{j=j+11*(t[d]-t[c])/abs(t[d]-t[c]);}if(a[v[j]]!=' ')b=1;}
if(o%7==0&&f%2==0&&(z[c]==0||c==d||z[c]==z[d]||g!=1||b==1))goto q;
if(f%2!=0&&(z[c]==2||z[c]==0||c==d||z[c]==z[d]||g!=1||b==1)){printf("Bel%s",r);goto y;}if(f%2==0&&(z[c]==1||z[c]==0||c==d||z[c]==z[d]||g!=1||b==1)){printf("Crn%s",r);goto y;}
if(t[c]==51)o*=2;if(t[c]==58)o*=13;if(t[c]==11)o*=17;if(t[c]==81)o*=19;if(t[c]==18)o*=23;if(t[c]==88)o*=29;a[d]=a[c];a[c]=' ';j=z[c];z[c]=z[d];z[d]=j;
if(a[d]=='p')strcpy(V,"pesaka");if(a[d]=='s')strcpy(V,"konja");if(a[d]=='K')strcpy(V,"kralja");if(a[d]=='D')strcpy(V,"kraljicu");if(a[d]=='l')strcpy(V,"lovca");if(a[d]=='T')strcpy(V,"topa");if(f%2!=0)printf("Bel%s%s%s%d%s%d.\nCrn%s",R,V,q,t[c],Q,t[d],k);else{printf("Crn%s%s%s%d%s%d.\nBel%s",R,V,q,t[c],Q,t[d],k);}}printf("on je izgubio");}/*#include<stdio.h>#include<stdlib.h>#include<windows.h>#include<iostream>main(){int b=0;while(b<256){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),b);printf(" %d ",b);b++;}}*/
