#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

/* partie 1 */
/* declaration de la liste de la 1ere partie */
typedef struct maillon
 {  char val[30] ;  /* pour les noms des familles */
	struct maillon *adr ;
}maillon;
typedef maillon* ptr ;



/*     ptr    pointeur pour les maillon de la liste principale du 1ere partie */
/*     ptr0   pointeur pour les maillon de la liste principale du 2eme partie */
/*     pp    pointeur pour les maillon de la liste des parents du 2eme partie */
/*     pe    pointeur pour les maillon de la liste des enfants du 2eme partie */
/*     pv   pointeur pour les maillon de la liste des voitures du 2eme partie */

void rempal(char  *a )
{
    int  i=0 , taille=rand()%8+4 ;
    char tab[100]="" , m ;
while(i<taille-2)
  {
    m=(char)(rand()%24+97);
    strncat(tab,&m,1);
    i++ ;
  }
i=0 ;
while (i<taille-2)
   {
   	a[i]=tab[i];
   	i++ ;
   }
}


/*partie 2 */
/* declaration de la liste de la 2eme partie */

/* maillon de la liste des parents*/
typedef struct maillon1
 {  char val1[20] ;  /* pour les prenoms des parents */
    char par ; /* pour le sexe des parents */
	struct maillon1 *adr1 ;
}maillon1;

/* maillin de la liste des enfants */
typedef struct maillon2
 {  char val2[20] ;/* pour les prenoms des enfants */
    char enf ; /* pour le sexe des enfants */
	struct maillon2 *adr2 ;
}maillon2;

/* maillin de la liste des voitures */
typedef struct maillon3
 {  char val3[20] ; /* pour les noms des voiture */
    int matr ; /* pour les matricules des voiture */
	struct maillon3 *adr3 ;
}maillon3;

typedef maillon1* pp;
typedef maillon2* pe;
typedef maillon3* pv;

/* maillon de la liste pricipal */
typedef struct maillon0
 {  char val0[20] ; /* pour les nom des familles */
	struct maillon0 *adr0 ; /* un pointeur sur le maaillon des nom des familles */
	pp tete1 ;  /* un pointeur sur la liste des parents */
	pe tete2 ;  /* un pointeur sur la liste des enfants */
	pv tete3 ;  /* un pointeur sur la liste des voiture */
}maillon0;

typedef maillon0* ptr0;






/* procedure pour donner des couleurs a les ecritures */
void color(int couleurdutexte, int couleurdefond)
{
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurdefond*16+couleurdutexte);
}







/* partie 1 */
/* les fonctions de la 1ere partie */
void allouer(ptr *p)
{
	*p=(maillon*) malloc(sizeof(maillon));
}



char valeur(ptr p, int i)
{
	return p->val[i] ;
}




ptr suivant(ptr p)
{
  return	p->adr ;
}



void aff_adr(ptr p,ptr q)
{
   p->adr=q ;
}



void aff_val(ptr p,char v,int i)
{
	p->val[i]=v;
}








/* partie 20 */
/* les fonctions du 2eme partie de la liste prencipale les nom des familles */
void allouer0(ptr0 *p)
{
	*p=(maillon0*) malloc(sizeof(maillon0));
}



char valeur0(ptr0 p, int i)
{
	return p->val0[i] ;
}




ptr0 suivant0(ptr0 p)
{
  return	p->adr0 ;
}




void aff_adr0(ptr0 p,ptr0 q)
{
   p->adr0=q ;
}



void aff_val0(ptr0 p,char v,int i)
{
	p->val0[i]=v;
}
/***/











/* partie 21 */
/* les fonctions du 2eme partie de la liste des parents */
void allouer1(pp *p)
{
	*p=(maillon1*) malloc(sizeof(maillon1));
}



char valeur1(pp p, int i)
{
	return p->val1[i] ;
}



char valeur11(pp p)
{
	return p->par ;
}



pp suivant1(pp p)
{
  return	p->adr1 ;
}



void aff_adr1(pp p,pp q)
{
   p->adr1=q ;
}



void aff_val1(pp p,char v,int i)
{
	p->val1[i]=v;
}



void aff_val11(pp p,char v)
{
	p->par=v;
}



pp creer_pop1(void) /* fonction pour creer la liste des parents */
{
	pp p ,  q ;  int n,i=1 ; char s ;
	printf(" \n Donner le nombre de parents :    ");
    scanf("%d",&n);
	pp tete=NULL ;

	while (i<=n)
	{
		allouer1(&p);
		printf("\n");
        printf(" Donner le nom du patents :     ");
	    rempal(p->val1);
	    puts(p->val1);
		printf(" Donner le sexe du parent (m / f):    ");
		scanf("%c",&s);
		scanf("%c",&s);
		aff_val11(p,s);
		aff_adr1(p,NULL);
		if (tete==NULL) tete=p ;
		else aff_adr1(q,p);
		q=p;
		i++;
	}
	if (n==0)  tete=NULL;
return tete ;
printf("\n");
}
/**/









/* partie 22 */
/* les fonctions du 2eme partie de la liste des enfants */
void allouer2(pe *p)
{
	*p=(maillon2*) malloc(sizeof(maillon2));
}


char valeur2(pe p, int i)
{
	return p->val2[i] ;
}


char valeur22(pe p)
{
	return p->enf ;
}



pe suivant2(pe p)
{
  return	p->adr2 ;
}



void aff_adr2(pe p,pe q)
{
   p->adr2=q ;
}




void aff_val2(pe p,char v,int i)
{
	p->val2[i]=v;
}



void aff_val22(pe p,char v)
{
	p->enf=v;
}



pe creer_pop2(void) /* un fonction pour creer la liste des enfants*/
{
	pe p ,  q ;  int n,i=1 ; char s ;
	printf("\n Donner le nombre des enfants :     ");
    scanf("%d",&n);
	pe tete=NULL ;

	while (i<=n)
	{
		allouer2(&p);
		printf("\n");
		if (i==1)
		{
	    	printf(" Donner le prenom du %d ere enfant   :     ",i);
	    	rempal(p->val2);
	    	puts(p->val2);
	    }
		else
		 {
		    printf(" Donner le prenom du %d eme enfant   :     ",i);
		    rempal(p->val2);
	    	puts(p->val2);
		 }
		printf(" Donner le sexe d'enfant (m / f):     ");
		scanf("%c",&s);
		scanf("%c",&s);
		aff_val22(p,s);
		aff_val22(p,s);
		aff_adr2(p,NULL);
		if (tete==NULL) tete=p ;
		else aff_adr2(q,p);
		q=p;
		i++;
	}
	if (n==0) tete=NULL;
return tete ;
printf("\n");
}
/**/









/* partie 23 */
/* les fonctions du 2eme partie de la liste du voitures  */
void allouer3(pv *p)
{
	*p=(maillon3*) malloc(sizeof(maillon3));
}


char valeur3(pv p, int i)
{
	return p->val3[i] ;
}




pv suivant3(pv p)
{
  return	p->adr3 ;
}




void aff_adr3(pv p,pv q)
{
   p->adr3=q ;
}



void aff_val3(pv p,char v,int i)
{
	p->val3[i]=v;
}





pv creer_pop3(void)/* une fonction pour creer la liste des voitures */
{
	pv p ,  q ;  int n,i=1 ;
	printf("\n Donner le nombre des voitures :    ");
    scanf("%d",&n);
	pv tete=NULL ;

	while (i<=n)
	{
		allouer3(&p);
		printf("\n");
		if (i==1)
		{
	    	printf(" Donner le prenom du %d ere voiture   :     ",i);
	        rempal(p->val3);
	        puts(p->val3);
	        printf(" Donner le metricule du %d ere voiture   :     ",i);
	    	p->matr=rand()%1000000000 ;
	    	printf("%d\n",p->matr);
	    }
		else
		 {
		    printf(" Donner le prenom du %d eme voiture   :    ",i);
		    rempal(p->val3);
	        puts(p->val3);
		    printf(" Donner le metricule du %d eme voiture   :    ",i);
		    p->matr=rand()%1000000000 ;
	    	printf("%d\n",p->matr);
		 }
		aff_adr3(p,NULL);
		if (tete==NULL) tete=p ;
		else aff_adr3(q,p);
		q=p;
		i++;
	}
	if (n==0) tete=NULL;
return tete ;
printf("\n");
}
/**/







ptr0 creer_pop0(void) /* une fonction prencipale pour creer toute la liste du 2 eme partie elle utilise les 3 fonctions qui precedent */
{    int n ;
	ptr0 p;  ptr0 q ;
	printf("\n Donner le nombre des familles :    ");
    scanf("%d",&n);
	ptr0 tete=NULL ; int i=1 ;
	while (i<=n)
	{
		allouer0(&p);
		printf("\n");
		if (i==1)
		{
	    	printf(" Donner le nom de la %d ere famille :    ",i);
	        rempal(p->val0);
	        puts(p->val0);
	    }
		else
		 {
		    printf(" Donner le nom de la %d eme famille :    ",i);
		    rempal(p->val0);
	        puts(p->val0);
		 }
		p->tete1=creer_pop1();
		p->tete2=creer_pop2();
		p->tete3=creer_pop3();
		aff_adr0(p,NULL);
		if (tete==NULL) tete=p ;
		else aff_adr0(q,p);
		q=p;
		i++;
	}
	if (n==0)  tete=NULL;
return tete ;
printf("\n");
}







ptr creer_pop(void) /* la fonction prencipale du 1 ere partie qui creer la  liste */
{    int n ;
	ptr p , tete,   q ;
	printf("\n Donner le nombre des familles :    ");
    scanf("%d",&n);
	tete=NULL ; int i=1 ;
	while (i<=n)
	{
		allouer(&p);
		printf("\n");
		if (i==1)
		{
	    	printf(" Donner le nom de la %d ere famille :    ",i);
	    }
		else
		 {
		    printf(" Donner le nom de la %d eme famille :    ",i);
		 }
	    rempal(p->val);
		puts(p->val);
		aff_adr(p,NULL);
		if (tete==NULL) tete=p ;
		else aff_adr(q,p);
		q=p;
		i++;
	}
return tete ;
printf("\n");
}






void afficher (ptr *tp)  /* un procedure pour afficher la liste du 1 ere partie */
{
 ptr p;
    p=*tp;
    printf("\n");
  	while (p!=NULL)
	{   puts(p->val);
		p=suivant(p);
		printf("\n");
	}
	printf("\n");
}







ptr prec (ptr ta,ptr pre)  /* une fonction qui done le precedent d'un pointeur de la liste du 1ere partie */
{  ptr z=ta,d ;
   while (z!=pre)
   { d=z ;
     z=suivant(z);
   }
return d ;
}






ptr0 prec0 (ptr0 ta,ptr0 pre) /* une fonction qui done le precedent d'un pointeur de la liste prencipale du 2eme partie */
{  ptr0 z=ta,d ;
   while (z!=pre)
   { d=z ;
     z=suivant0(z);
   }
return d ;
}







pe prec2 (pe ta,pe pre) /* une fonction qui done le precedent d'un pointeur de la liste des enfants de la  2eme partie */
{  pe z=ta,d ;
   while (z!=pre)
   { d=z ;
     z=suivant2(z);
   }
return d ;
}








void perm (ptr *he, ptr x ) /* un procedure qui permiter entre le maillon de l'adresse x et le
                              suivant de cette maillon parceque j'ai utilistee le tri par bulles pour tries la liste du 1ere partie */
{    ptr u=*he , v=*he  ;
     while ( (u!=x) && (u!=NULL) )
     {
        u=suivant(u);
	 }

     v=suivant(u);
     if(u==*he)
     {  aff_adr(u,suivant(v));
	    *he=v;
     	aff_adr(v,u);
	 }
	 else
	 {
	   aff_adr(prec(*he,u),v);
	   aff_adr(u,suivant(v));
	   aff_adr(v,u);

	 }
}







void perm0 (ptr0 *he, ptr0 x )  /* le meme procedure de permitation mais il marche avec la liste prencipale du 2eme partie */
{    ptr0 u=*he , v=*he  ;
     while ( (u!=x) && (u!=NULL) )
     {
        u=suivant0(u);
	 }

     v=suivant0(u);
     if(u==*he)
     {  aff_adr0(u,suivant0(v));
	    *he=v;
     	aff_adr0(v,u);
	 }
	 else
	 {
	   aff_adr0(prec0(*he,u),v);
	   aff_adr0(u,suivant0(v));
	   aff_adr0(v,u);

	 }
}







void afficher0 (ptr0 *tp)  /* un procedure pour afficher la liste du 1 ere partie */
{
 ptr0 p;
    p=*tp;
    printf("\n");
  	while (p!=NULL)
	{   puts(p->val0);
		p=suivant0(p);
		printf("\n");
	}
	printf("\n");
}






void trier_pop0(ptr0 *h)/* un procedure pour trier les maillons de la liste principale du 2eme partie selon l'ordre alphabetique et j'ai utilisee
                         le tri par bulles */
{  int k=1;
   ptr0 o ;
  while (k!=0)
  { o=*h ;
    k=0;
    while (suivant0(o)!=NULL)
    {
	    if ( valeur0(o,0) > valeur0(suivant0(o),0) )
       {
	     perm0(&*h,o);
       	 k++ ;
	   }
        else o=suivant0(o);
	}

  }
  printf("\n");
  printf(" La liste apres le tri : \n\n");
  afficher0(&*h);
}







void trier_pop(ptr *h) /* un procedure pour trier les maillons de la liste principale du 1eme partie selon l'ordre alphabetique et j'ai utilisee
                         le tri par bulles toujoure*/
{  int k=1;
   ptr o ;
  while (k!=0)
  { o=*h ;
    k=0;
    while (suivant(o)!=NULL)
    {
	    if ( valeur(o,0) > valeur(suivant(o),0) )
       {
	     perm(&*h,o);
       	 k++ ;
	   }
        else o=suivant(o);
	}

  }
  printf("\n");
  printf(" La liste apres le tri : \n\n");
  afficher(&*h);
}











int nbfamille (ptr tete) /* une fonction pour donne la longeur de la liste du 1ere partie */
{  ptr m=tete ;
   int l=0 ;
   while (m!=NULL)
   {
   	  l++ ;
  	 m=suivant(m);
   }
   return l ;
   printf("\n");
}





int nbfamille0 (pe tete) /* une fonction pour donne la longeur de la liste prencipale du 2eme partie */
{  pe m=tete ;
   int l=0 ;
   while (m!=NULL)
   {
   	  l++ ;
  	 m=suivant2(m);
   }
   return l ;
   printf("\n");
}






ptr present (ptr tete,char g1[])  /*  fonction  pour donne l'adresse d'une famille si elle exist pour la liste du 1 ere partie le liste est trier*/
{
     ptr p=tete ; int b=0 ;
     while ((b!=1) && (p!=NULL) && (valeur(p,0)<=g1[0]))
     {
     	if (strcmp(g1,p->val)==0)  b=1 ;
     	else p=suivant(p);
	 }
	 if (b==1) return p ;
	 else return NULL ;
}








ptr0 present0 (ptr0 tete,char g1[])  /*  fonction  pour donne l'adresse d'une famille si elle exist pour la liste du 2 eme partie la liste est trier*/
{
     ptr0 p=tete ; int b=0 ;
     while ((b!=1) && (p!=NULL) && (valeur0(p,0)<=g1[0]))
     {
     	if (strcmp(g1,p->val0)==0)  b=1 ;
     	else p=suivant0(p);
	 }
	 if (b==1) return p ;
	 else return NULL ;
}







 void inser(ptr *y)   /*  un procedure pour inserer une famille dans la liste du 1ere partie  et la liste est trier */
 {
 	ptr p=*y,q  ; int b=0  ; char g[20];
 	printf(" \n Donner la famille qui vous vouler inserer  :   ");
 	gets(g);
 	gets(g);
 	if (present(*y,g)==NULL)
 	{
	    while ((p!=NULL) && ( valeur(p,0)<=g[0]))
 	    {
 	    	p=suivant(p);
		 }

	    if (p==*y)
	    { if (*y==NULL)
	      {
	        allouer(&q);
	        *y=q;
	        aff_adr(q,NULL);

		  }
	      else
	      {
         allouer(&q);
         aff_adr(q,*y);
         *y=q;
		 strcpy(q->val,g);
	      }
	      printf("\n");
        }
        else

	    {
          allouer(&q);
          aff_adr(prec(*y,p),q);
          aff_adr(q,p);
          strcpy(q->val,g);
           printf("\n");
        }
		printf(" les familles apres l'insertion : \n");
  	    afficher(&*y);
   }
    else printf(" Famille exist deja .\n");
    printf("\n");
}









 void inser2(pe *y)   /*  un procedure pour inserer un enfant dand la liste des enfants et la liste est trier */
 {
 	pe p=*y,q  ; int b=0 , b1=0 ; char g[20] , s ;
 	printf(" \n Donner le prenom d'enfant qui vous vouler inserer  :   ");
 	gets(g);
 	printf("\n");
 	printf(" Donner leur sexe  :   ");
 	scanf("%c",&s);
 	printf("\n");
	    while ((p!=NULL) && ( valeur2(p,0)<=g[0]))
 	    {
 	    	p=suivant2(p);
		 }
	    if (p==*y)
	    { if (*y==NULL)
	      {
	        allouer2(&q);
	        *y=q;
	        aff_adr2(q,NULL);
	        strcpy(q->val2,g);
	        q->enf=s;
		  }
	      else
	      {
         allouer2(&q);
         aff_adr2(q,*y);
         *y=q;
		 strcpy(q->val2,g);
		 q->enf=s;
	      }
	      printf("\n");
        }
        else

	    {
          allouer2(&q);
          aff_adr2(prec2(*y,p),q);
          aff_adr2(q,p);
          strcpy(q->val2,g);
          q->enf=s;
           printf("\n");
        }
}







void supp(ptr *o)   /*  suprrimer un famille dans la liste et la liste est trier */
{
	ptr p ;  char g[20];
    printf("\n Donner la famille qui vous vouler suprrimer :   ");
	gets(g);
	gets(g);
    p=present(*o,g);
    if (p!=NULL)
    {
    	if (p==*o) *o=suivant(p);
		else aff_adr(prec(*o,p),suivant(p));
		free(p);
		printf(" les familles apres la suppression  : \n");
	    afficher(&*o);
	}
    else printf(" Famille n'existe pas .\n");
    printf("\n");
}







int nbfamillesansparent (ptr0 tt)
{
	ptr0 q=tt ; int i=0 ;
	while (q!=NULL)
	{
		if (q->tete1==NULL) i++ ;
		q=suivant0(q);
	}
	return i ;
}







int nbenfant (ptr0 tet)
{   ptr0 p=tet ; int i=0 ;
	while (p!=NULL)
	{
	    i=i+nbfamille0(p->tete2);
		p=suivant0(p);
	}
return i ;
}







int nbenfnomfam(ptr0 tte)
{   ptr0 r ; char ch[20];
	printf(" \n Donner le nom du famille pour vous donnes le nombre des enfants de cette famille :    ");
	gets(ch);
	gets(ch);
	printf("\n");
	if (present0(tte,ch)==NULL) { printf(" Famille n'exict pas dans pop  "); return 0 ; printf(" .\n");}
	else
	{
	  printf(" Le nombre de enfants de la famille %s est :  ",present0(tte,ch)->val0);
	  return nbfamille0(present0(tte,ch)->tete2);
    }
    printf("\n");
}









void afficher2 (pe *tp)  /* un procedure pour afficher la liste des enfants du 2 eme partie */
{
 pe p;
    p=*tp;
  	while (p!=NULL)
	{
		printf(" %s ---> %c \n",p->val2,p->enf);
		p=suivant2(p);
	}
	printf("\n");
}









void perm2 (pe *he, pe x )  /* procedure pour permiter entre le maillon de l'adresse x et le suivants de cette maillon da la liste des enfants */
{    pe u=*he , v=*he  ;
     while ( (u!=x) && (u!=NULL) )
     {
        u=suivant2(u);
	 }

     v=suivant2(u);
     if(u==*he)
     {  aff_adr2(u,suivant2(v));
	    *he=v;
     	aff_adr2(v,u);
	 }
	 else
	 {
	   aff_adr2(prec2(*he,u),v);
	   aff_adr2(u,suivant2(v));
	   aff_adr2(v,u);

	 }
}






void trier_pop2(pe *h) /* un procedure pour trier la liste des enfants */
{  int k=1;
   pe o ;
  while (k!=0)
  { o=*h ;
    k=0;
    while (suivant2(o)!=NULL)
    {
	    if ( valeur2(o,0) > valeur2(suivant2(o),0) )
       {
	     perm2(&*h,o);
       	 k++ ;
	   }
        else o=suivant2(o);
	}

  }
  printf("\n");
}








void naissanceTrie (ptr0 *tete)
{
	ptr0 p=*tete ; char ch[20];
	printf(" \n Donner le nom de familler auquel vous vouler inserer un enfant :    ");
	gets(ch);
	gets(ch);
	if ((present0(*tete,ch)==NULL) || (present0(*tete,ch)==NULL)) printf(" Famille n'exist pas dans pop  ! \n");
	else
	{
		p=present0(*tete,ch) ;
		trier_pop2(&p->tete2);
		inser2(&p->tete2);
		printf(" \n la liste des enfants de la famille %s apres l'insertion est : \n",p->val0);
		afficher2(&p->tete2);
	}
	printf("\n\n");
}







int test (pv t , int ch)/* un fonction de sertie booleen qui ferevier si le matrecule d'une voiture appartient a la liste des voitures */
{
   pv j=t ; int bo=0;
   while ((bo!=1) && (j!=NULL))
   {
   	     if (j->matr==ch)  bo=1 ;
   	     else j=suivant3(j);
   }
   if (j==NULL) return 0;
   else return 1 ;
}







ptr0 RechFamVoit_1(ptr0 m)
{   int k=0 , g ; ptr0 n=m ;
	printf(" \n Donner le matricule du voiture qui vous vouler chercher :   ");
	scanf("%d",&g);
	printf("\n");
	while ((k!=1) && (n!=NULL))
	{
		if (test(n->tete3,g)==1)  k=1 ;
		else n=suivant0(n);
	}
	if (n==NULL) return  NULL ;
		else return n ;
}





/* le programe principale */
int main()

{  char menu,sm,sl,g[20];
  ptr po ; ptr0 po1 ;
   color(10,5);
    printf("                                                                MENU PRINCIPAL :\n ");
  	printf("                                                              =================\n ");
  	printf(" 1 - pour tester la 1ere partie .\n");
  	printf("  2 - pour tester la 2eme partie .\n");
  	printf("  3 - pour quitter .\n");
  	scanf("%c",&menu);
  while (menu!='3')
  { if ((menu!='1') && (menu!='2') && (menu!='3')) printf(" CHOIS NON TROUVER ESSEYER AUTRE FOIS !\n");
  	if (menu=='1')
  	{   sm=' ';
  		printf("\n                                                          MENU DE LA 1ERE PARTIE :\n");
  		printf("                                                          =========================\n");
  		printf(" t - pour trier une liste donner.\n ");
  		printf("n - pour vous donne le nombre des familles dans une liste donner.\n ");
  		printf("p - pour vous donne l'adresse d'un famille ( la liste va trier aliatoirement ).\n ");
  		printf("i - pour inserer une famille ( la liste va trier aliatoirement ).\n ");
  		printf("s - pour supprimer une famille dans la liste ( la liste va trier aliatoirement ) .\n ");
  		printf("q - pour return au menu principal .\n ");
  		while (sm!='q')
  		{  scanf("%c",&sm);
  		   if (sm=='t')
  		   {  po=creer_pop();
  		      trier_pop(&po);
  		      printf(" Entrer une autre caractere : \n");
		   }
		   if (sm=='n')
  		   {  po=creer_pop();
  		     printf(" Le nombre des familles appartenant a la population pop est : %d \n",nbfamille(po));
  		     printf(" Entrer une autre caractere : \n");
		   }
		    if (sm=='p')
  		   {  po=creer_pop();
  		     trier_pop(&po);
  		     printf(" Donner la famille qui vous vouler charcher : ");
         	 gets(g);
         	 gets(g);
  		     printf(" L'adresse est : %ptr \n",present(po,g));
  		     printf(" Entrer une autre caractere : \n");
		   }
  		    if (sm=='i')
  		   { po=creer_pop();
  		     trier_pop(&po);
  		     inser(&po);
  		     printf(" Entrer une autre caractere : \n");
		   }
		   if (sm=='s')
		   {  po=creer_pop();
		      trier_pop(&po);
		      supp(&po);
		      printf(" Entrer une autre caractere : \n");
	       }
		}


	  }
  	if (menu=='2')
  	{  sl=' ';
	    printf("\n                                                          MENU DE LA 2EME PARTIE :\n");
  		printf("                                                          =========================\n");
  		printf("  n - pour vous donne le nombre des familles dont les parents sont decedes dons une liste donner.\n ");
  		printf(" b - pour vous donne le nombre des enfants de pop .\n ");
  		printf(" c - pour vous donne le nombre des enfants d'une famille (la liste va trier aliatoirement ).\n ");
  		printf(" f - pour inserer une enfant d'une famille (la liste pop et la liste des enfants seront triees aliatoirement ) .\n ");
  		printf(" v - pour vous donne l'adresse du famille qui possedant une voiture donner .\n ");
  		printf(" q - pour return au menu principal .\n ");
  	   sl=' ';
  	   while (sl!='q')
  		{
		    scanf("%c",&sl);
  		   if (sl=='n')
  		   {
  		     po1=creer_pop0();
  		     printf(" le nombre de familles de pop dont les parents sont decedes est : %d \n",nbfamillesansparent(po1));
  		     if (sm!='q')  printf(" Entrer une autre caractere : \n");
		   }
		   if (sl=='b')
  		   {
  		      po1=creer_pop0();
  		      printf(" le nombre des enfants de pop est : %d \n",nbenfant(po1));
  		      if (sm!='q')  printf(" Entrer une autre caractere : \n");
  		   }
		    if (sl=='c')
  		   {
  		      po1=creer_pop0();
  		      trier_pop0(&po1);
  		      printf("%d \n",nbenfnomfam(po1));
  		      if (sm!='q')  printf(" Entrer une autre caractere : \n");
		   }
  		    if (sl=='f')
  		   {
  		     po1=creer_pop0();
  		     trier_pop0(&po1);
  		     naissanceTrie (&po1);
  		     if (sm!='q')  printf(" Entrer une autre caractere : \n");
		   }
		   if (sl=='v')
		   {
		     po1=creer_pop0();
		     printf(" L'adresse de la famille qui possedant cette voiture est : %ptr0 \n",RechFamVoit_1(po1));
		     if (sm!='q')  printf(" Entrer une autre caractere : \n");
	       }
	  }

  }
    printf("                                                                MENU PRINCIPAL : \n");
  	printf("                                                               ================= \n");
  	printf(" 1 - pour tester la 1ere partie .\n");
  	printf(" 2 - pour tester la 2eme partie .\n");
  	printf(" 3 - pour quitter .\n");
  	 scanf("%c",&menu);
	  scanf("%c",&menu);
}
return 0 ;
}
