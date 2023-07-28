#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
  typedef int bool ;
  typedef char * string255 ;
  typedef char * string2 ;

  #define True 1
  #define False 0

  void color(int couleurdutexte, int couleurdefond)
   {
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurdefond*16+couleurdutexte);
    }


  /** Implémentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tiic Type_Tiic  ;
  typedef Type_Tiic * Typestr_Tiic ;
  typedef int Type1_Tiic  ;
  typedef int Type2_Tiic  ;
  typedef string2 Type3_Tiic  ;
  struct Tiic
    {
      Type1_Tiic Champ1 ;
      Type2_Tiic Champ2 ;
      Type3_Tiic Champ3 ;
    };

  Type1_Tiic Struct1_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tiic Struct2_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tiic Struct3_Tiic ( Typestr_Tiic S)
    {
      return  S->Champ3 ;
    }

  void Aff_struct1_Tiic ( Typestr_Tiic S, Type1_Tiic Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Tiic ( Typestr_Tiic S, Type2_Tiic Val )
    {
       S->Champ2 = Val ;
    }

  void Aff_struct3_Tiic ( Typestr_Tiic S, Type3_Tiic Val )
    {
      strcpy( S->Champ3 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tiic Typeelem_ATiic   ;
  typedef struct Noeud_ATiic * Pointeur_ATiic ;

  struct Noeud_ATiic
    {
      Typeelem_ATiic  Val ;
      Pointeur_ATiic Fg ;
      Pointeur_ATiic Fd ;
      Pointeur_ATiic Pere ;
     } ;

  Typeelem_ATiic Info_ATiic( Pointeur_ATiic P )
    { return P->Val;   }

  Pointeur_ATiic Fg_ATiic( Pointeur_ATiic P)
    { return P->Fg ; }

  Pointeur_ATiic Fd_ATiic( Pointeur_ATiic P)
    { return P->Fd ; }

  Pointeur_ATiic Pere_ATiic( Pointeur_ATiic P)
    { return P->Pere ; }

  void Aff_info_ATiic ( Pointeur_ATiic P, Typeelem_ATiic Val)
    {
      Typeelem_ATiic _Temp ;
      _Temp = malloc(sizeof(Type_Tiic));
      _Temp->Champ3 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      _Temp->Champ1 = Val->Champ1;
      _Temp->Champ2 = Val->Champ2;
      strcpy(_Temp->Champ3, Val->Champ3);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATiic( Pointeur_ATiic P, Pointeur_ATiic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATiic( Pointeur_ATiic *P)
    {
      *P = (struct Noeud_ATiic *) malloc( sizeof( struct Noeud_ATiic))   ;
      (*P)->Val = malloc(sizeof(Type_Tiic));
      (*P)->Val->Champ3 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATiic( Pointeur_ATiic P)
    { free( P ) ; }


  /** Implémentation **\: TABLEAU DE ARBRES BINAIRES DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tssic Type_Tssic  ;
  typedef Type_Tssic * Typestr_Tssic ;
  typedef string255 Type1_Tssic  ;
  typedef string255 Type2_Tssic  ;
  typedef int Type3_Tssic  ;
  typedef string2 Type4_Tssic  ;
  struct Tssic
    {
      Type1_Tssic Champ1 ;
      Type2_Tssic Champ2 ;
      Type3_Tssic Champ3 ;
      Type4_Tssic Champ4 ;
    };

  Type1_Tssic Struct1_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ1 ;
    }

  Type2_Tssic Struct2_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ2 ;
    }

  Type3_Tssic Struct3_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ3 ;
    }

  Type4_Tssic Struct4_Tssic ( Typestr_Tssic S)
    {
      return  S->Champ4 ;
    }

  void Aff_struct1_Tssic ( Typestr_Tssic S, Type1_Tssic Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tssic ( Typestr_Tssic S, Type2_Tssic Val )
    {
      strcpy( S->Champ2 , Val );
    }

  void Aff_struct3_Tssic ( Typestr_Tssic S, Type3_Tssic Val )
    {
       S->Champ3 = Val ;
    }

  void Aff_struct4_Tssic ( Typestr_Tssic S, Type4_Tssic Val )
    {
      strcpy( S->Champ4 , Val );
    }


  /** Arbres de recherche binaire **/

  typedef Typestr_Tssic Typeelem_ATssic   ;
  typedef struct Noeud_ATssic * Pointeur_ATssic ;

  struct Noeud_ATssic
    {
      Typeelem_ATssic  Val ;
      Pointeur_ATssic Fg ;
      Pointeur_ATssic Fd ;
      Pointeur_ATssic Pere ;
     } ;

  Typeelem_ATssic Info_ATssic( Pointeur_ATssic P )
    { return P->Val;   }

  Pointeur_ATssic Fg_ATssic( Pointeur_ATssic P)
    { return P->Fg ; }

  Pointeur_ATssic Fd_ATssic( Pointeur_ATssic P)
    { return P->Fd ; }

  Pointeur_ATssic Pere_ATssic( Pointeur_ATssic P)
    { return P->Pere ; }

  void Aff_info_ATssic ( Pointeur_ATssic P, Typeelem_ATssic Val)
    {
      Typeelem_ATssic _Temp ;
      _Temp = malloc(sizeof(Type_Tssic));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      _Temp->Champ4 = malloc(2 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      _Temp->Champ3 = Val->Champ3;
      strcpy(_Temp->Champ4, Val->Champ4);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATssic( Pointeur_ATssic P, Pointeur_ATssic Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATssic( Pointeur_ATssic *P)
    {
      *P = (struct Noeud_ATssic *) malloc( sizeof( struct Noeud_ATssic))   ;
      (*P)->Val = malloc(sizeof(Type_Tssic));
      (*P)->Val->Champ1 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ2 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ4 = malloc( 2 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATssic( Pointeur_ATssic P)
    { free( P ) ; }


  /** Tableaux **/

  typedef Pointeur_ATssic Typeelem_V10ATssic ;
  typedef Typeelem_V10ATssic * Typevect_V10ATssic ;

  Typeelem_V10ATssic Element_V10ATssic ( Typevect_V10ATssic V , int I1  )
    {
      return  *(V + I1-1 ) ;
    }

  void Aff_element_V10ATssic ( Typevect_V10ATssic V  , int I1 ,  Typeelem_V10ATssic Val )
    {
      *(V + I1-1 ) = Val ;
    }


  /** Implémentation **\: PILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Piles **/

  typedef Pointeur_ATssic Typeelem_PATssic ;
  typedef struct Maillon_PATssic * Pointeur_PATssic ;
  typedef   Pointeur_PATssic  Typepile_PATssic  ;

  struct Maillon_PATssic
    {
      Typeelem_PATssic  Val ;
      Pointeur_PATssic Suiv ;
    } ;

  void Creerpile_PATssic( Pointeur_PATssic *P )
    { *P = NULL ; }

  bool Pilevide_PATssic ( Pointeur_PATssic P )
    { return  (P == NULL ); }

  void Empiler_PATssic ( Pointeur_PATssic *P,  Typeelem_PATssic Val )
    {
      Pointeur_PATssic Q;

      Q = (struct Maillon_PATssic *) malloc( sizeof( struct Maillon_PATssic))   ;
      Q->Val = Val ;
      Q->Suiv = *P;
      *P = Q;
    }

  void Depiler_PATssic ( Pointeur_PATssic *P,  Typeelem_PATssic *Val )
    {
      Pointeur_PATssic Sauv;

      if (! Pilevide_PATssic (*P) )
        {
          *Val = (*P)->Val ;
          Sauv = *P;
          *P = (*P)->Suiv;
          free(Sauv);
        }
      else printf ("%s \n", "Pile vide");
    }


  /** Implémentation **\: PILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Piles **/

  typedef Pointeur_ATiic Typeelem_PATiic ;
  typedef struct Maillon_PATiic * Pointeur_PATiic ;
  typedef   Pointeur_PATiic  Typepile_PATiic  ;

  struct Maillon_PATiic
    {
      Typeelem_PATiic  Val ;
      Pointeur_PATiic Suiv ;
    } ;

  void Creerpile_PATiic( Pointeur_PATiic *P )
    { *P = NULL ; }

  bool Pilevide_PATiic ( Pointeur_PATiic P )
    { return  (P == NULL ); }

  void Empiler_PATiic ( Pointeur_PATiic *P,  Typeelem_PATiic Val )
    {
      Pointeur_PATiic Q;

      Q = (struct Maillon_PATiic *) malloc( sizeof( struct Maillon_PATiic))   ;
      Q->Val = Val ;
      Q->Suiv = *P;
      *P = Q;
    }

  void Depiler_PATiic ( Pointeur_PATiic *P,  Typeelem_PATiic *Val )
    {
      Pointeur_PATiic Sauv;

      if (! Pilevide_PATiic (*P) )
        {
          *Val = (*P)->Val ;
          Sauv = *P;
          *P = (*P)->Suiv;
          free(Sauv);
        }
      else printf ("%s \n", "Pile vide");
    }


  /** Variables du programme principal **/
  Pointeur_ATiic Arbre;
  Typestr_Tiic Noeud2;
  Typevect_V10ATssic Tab;
  Typestr_Tssic Noeud;
  Pointeur_ATssic P;
  Pointeur_ATssic Q;
  int N;
  int I;
  int J;
  int A;
  int B;
  string2 M;

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }

  char  *Aleachaine ( int N )
    {
      int k;
      char  * Chaine = malloc(N+1);

      char Chr1[26] = "abcdefghijklmnopqrstuvwxyz";
      char Chr2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

      for (k=0;k<N; k++)
        switch ( rand() % 2 ){
        case 0 :  *(Chaine+k) = Chr1[rand() % 26] ; break ;
        case 1 :  *(Chaine+k) = Chr2[rand() % 26] ; break ;
        }
      Chaine[k] =  '\0' ;

      return (Chaine);
    }


  /** Prototypes des fonctions **/

  int  Divis (int *A , int *B) ;
  void Inser_arb (Pointeur_ATssic *A , Typestr_Tssic *B);
  void Remp_noeud (Typestr_Tssic *B);
  void Afficher_arb (Pointeur_ATssic *R);
  void Afficher_arb2 (Pointeur_ATiic *R);
  void Afficher_tab (Typevect_V10ATssic *T);
  int  Nb_age_arb (Pointeur_ATssic *R , int *B , string2 *C) ;
  int  Nb_age_arb2 (Pointeur_ATiic *R , int *B , int *D , string2 *C) ;
  int  Cmp (int *A , int *B , string2 *C , string2 *D) ;
  void Inser_arb2 (Pointeur_ATiic *A , Typestr_Tiic *B);
  int  Nb_age_tab (Typevect_V10ATssic *Z , int *K , string2 *S) ;
  void Remp_nv_structure (Typevect_V10ATssic *A , Pointeur_ATiic *D);
  int  Nb_noeud (Pointeur_ATiic *R) ;

  int  Divis (int *A , int *B)
    {
      /** Variables locales **/
      int  Divis2 ;
      int Cpt;

      /** Corps du module **/
     Cpt  =  0 ;
     while( *A > *B) {
       Cpt  =  Cpt + 1 ;
       *A  =  *A - *B ;

     } ;
     Divis2  =  Cpt ;

     return Divis2 ;
    }
  void Inser_arb (Pointeur_ATssic *A , Typestr_Tssic *B)
    {
      /** Variables locales **/
      Pointeur_ATssic C;
      Pointeur_ATssic _Px1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     if( Struct3_Tssic ( Info_ATssic ( *A )  ) > Struct3_Tssic ( *B  )) {
       if( ( Fg_ATssic ( *A ) == NULL )) {
         Creernoeud_ATssic (& C ) ;
         Aff_info_ATssic ( C , *B ) ;
         Aff_fg_ATssic ( *A , C ) ;
         }
       else
         {
         _Px1 =  Fg_ATssic ( *A ) ;
         Inser_arb ( &_Px1, & *B ) ;

       } }
     else
       {
       if( ( Fd_ATssic ( *A ) == NULL )) {
         Creernoeud_ATssic (& C ) ;
         Aff_info_ATssic ( C , *B ) ;
         Aff_fd_ATssic ( *A , C ) ;
         }
       else
         {
         _Px2 =  Fd_ATssic ( *A ) ;
         Inser_arb ( &_Px2, & *B ) ;

       }
     }
    }
  void Remp_noeud (Typestr_Tssic *B)
    {
      /** Variables locales **/
      int K;

      /** Corps du module **/
     Aff_struct1_Tssic ( *B  , Aleachaine(Aleanombre(5 ) + 5 ) ) ;
     Aff_struct2_Tssic ( *B  , Aleachaine(Aleanombre(5 ) + 5 ) ) ;
     Aff_struct3_Tssic ( *B  , Aleanombre(99 ) + 1 ) ;
     K  =  Aleanombre(10 ) ;
     if( K > 5) {
       Aff_struct4_Tssic ( *B  , "d" ) ;
       }
     else
       {
       Aff_struct4_Tssic ( *B  , "r" ) ;

     }
    }
  void Afficher_arb (Pointeur_ATssic *R)
    {
      /** Variables locales **/
      Type_Tssic _Struct_Temp1;
      Pointeur_ATssic _Px1;
      Pointeur_ATssic _Px2;

      /** Corps du module **/
     if( ( *R != NULL )) {
       /** Ecriture d'une structure */
       _Struct_Temp1 = *Info_ATssic(*R);
       color(2,0);
       printf("Nom : ");
       color(4,0);
       printf ( " %s\n", _Struct_Temp1.Champ1 );
       color(2,0);
       printf("Prenom : ");
       color(4,0);
       printf ( " %s\n", _Struct_Temp1.Champ2 );
       color(2,0);
       printf("Age : ");
       color(4,0);
       printf ( " %d\n", _Struct_Temp1.Champ3 );
       color(2,0);
       printf("Resultat : ");
       color(4,0);
       printf ( " %s\n", _Struct_Temp1.Champ4 ) ;
       color(4,0);
       printf ("*************\n\n" ) ;
       _Px1 =  Fg_ATssic ( *R ) ;
       Afficher_arb ( &_Px1) ;
       _Px2 =  Fd_ATssic ( *R ) ;
       Afficher_arb ( &_Px2) ;

     }
    }
  void Afficher_arb2 (Pointeur_ATiic *R)
    {
      /** Variables locales **/
      Type_Tiic _Struct_Temp2;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     if( ( *R != NULL )) {
       /** Ecriture d'une structure */
       _Struct_Temp2 = *Info_ATiic(*R);

       color(11,0);
       printf("Age : ");
       color(14,0);
       printf ( " %d\n", _Struct_Temp2.Champ1 );
       color(11,0);
       printf("Occurence : ");
       color(14,0);
       printf ( " %d\n", _Struct_Temp2.Champ2 );
       color(11,0);
       printf("Resultat : ");
       color(14,0);
       printf ( " %s\n", _Struct_Temp2.Champ3 ) ;
       color(10,0);
       printf ( "*************\n\n" ) ;
       _Px1 =  Fg_ATiic ( *R ) ;
       Afficher_arb2 ( &_Px1) ;
       _Px2 =  Fd_ATiic ( *R ) ;
       Afficher_arb2 ( &_Px2) ;

     }
    }
  void Afficher_tab (Typevect_V10ATssic *T)
    {
      /** Variables locales **/
      int I;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     I  =  1 ;
     for( I  =  1 ;I <=  50 ; ++I)
        { color(11,0);
       printf ( "Le pay : %d\n", I ) ;
       printf ( "**********************************************************************\n" ) ;
       _Px1 =  Element_V10ATssic ( *T , I   ) ;
       Afficher_arb ( &_Px1) ;

     }
    }
  int  Nb_age_arb (Pointeur_ATssic *R , int *B , string2 *C)
    {
      /** Variables locales **/
      int  Nb_age_arb2 ;
      int Nb;
      Pointeur_PATssic P;

      /** Corps du module **/
     Creerpile_PATssic (& P ) ;
     Nb  =  0 ;
     while( ( *R != NULL ) || ( Pilevide_PATssic ( P ) != True )) {
       while( *R != NULL) {
         if( ( Struct3_Tssic ( Info_ATssic ( *R )  ) == *B ) && (strcmp( Struct4_Tssic ( Info_ATssic ( *R )  ), *C) == 0  )) {
           Nb  =  Nb + 1 ;

         } ;
         Empiler_PATssic (& P , *R ) ;
         *R  =  Fg_ATssic ( *R ) ;

       } ;
       Depiler_PATssic (& P , &*R ) ;
       *R  =  Fd_ATssic ( *R ) ;

     } ;
     Nb_age_arb2  =  Nb ;

     return Nb_age_arb2 ;
    }
  int  Nb_age_arb2 (Pointeur_ATiic *R , int *B , int *D , string2 *C)
    {
      /** Variables locales **/
      int  Nb_age_arb22 ;
      int Nb;
      Pointeur_PATiic P;

      /** Corps du module **/
     Creerpile_PATiic (& P ) ;
     Nb  =  0 ;
     while( ( *R != NULL ) || ( Pilevide_PATiic ( P ) != True )) {
       while( *R != NULL) {
         if( ( Struct1_Tiic ( Info_ATiic ( *R )  ) >= *B ) && (strcmp( Struct3_Tiic ( Info_ATiic ( *R )  ), *C) == 0  ) && ( Struct1_Tiic ( Info_ATiic ( *R )  ) <= *D )) {
           Nb  =  Nb + 1 ;

         } ;
         Empiler_PATiic (& P , *R ) ;
         *R  =  Fg_ATiic ( *R ) ;

       } ;
       Depiler_PATiic (& P , &*R ) ;
       *R  =  Fd_ATiic ( *R ) ;

     } ;
     Nb_age_arb22  =  Nb ;

     return Nb_age_arb22 ;
    }
  int  Cmp (int *A , int *B , string2 *C , string2 *D)
    {
      /** Variables locales **/
      int  Cmp2 ;

      /** Corps du module **/
     if( *A >= *B) {
       if( *A > *B) {
         Cmp2  =  1 ;
         }
       else
         {
         if( ( (strcmp( *C, "r") == 0  ) && (strcmp( *D, "d") == 0  ) ) || (strcmp( *C, *D) == 0  )) {
           Cmp2  =  1 ;
           }
         else
           {
           Cmp2  =  0 ;

         } ;

       } ;
       }
     else
       {
       Cmp2  =  0 ;

     } ;

     return Cmp2 ;
    }
  void Inser_arb2 (Pointeur_ATiic *A , Typestr_Tiic *B)
    {
      /** Variables locales **/
      Pointeur_ATiic C;
      int _Px1;
      int _Px2;
      string2 _Px3;
      string2 _Px4;
      Pointeur_ATiic _Px5;
      Pointeur_ATiic _Px6;

      /** Corps du module **/
     _Px3 = malloc(2 * sizeof(char));
     _Px4 = malloc(2 * sizeof(char));
     if( *A == NULL) {
       Creernoeud_ATiic (& C ) ;
       *A  =  C ;
       Aff_info_ATiic ( *A , *B ) ;
       }
     else
       {
       _Px1 =  Struct1_Tiic ( *B  ) ;
       _Px2 =  Struct1_Tiic ( Info_ATiic ( *A )  ) ;
       strcpy(_Px3,  Struct3_Tiic ( *B  ) );
       strcpy(_Px4,  Struct3_Tiic ( Info_ATiic ( *A )  ) );
       if( Cmp ( &_Px1, &_Px2, &_Px3, &_Px4) == 0) {
         if( ( Fg_ATiic ( *A ) == NULL )) {
           Creernoeud_ATiic (& C ) ;
           Aff_info_ATiic ( C , *B ) ;
           Aff_fg_ATiic ( *A , C ) ;
           }
         else
           {
           _Px5 =  Fg_ATiic ( *A ) ;
           Inser_arb2 ( &_Px5, & *B ) ;

         } }
       else
         {
         if( ( Fd_ATiic ( *A ) == NULL )) {
           Creernoeud_ATiic (& C ) ;
           Aff_info_ATiic ( C , *B ) ;
           Aff_fd_ATiic ( *A , C ) ;
           }
         else
           {
           _Px6 =  Fd_ATiic ( *A ) ;
           Inser_arb2 ( &_Px6, & *B ) ;

         }
       }
     }
    }
  int  Nb_age_tab (Typevect_V10ATssic *Z , int *K , string2 *S)
    {
      /** Variables locales **/
      int  Nb_age_tab2 ;
      int O;
      int Cpt;
      Pointeur_ATssic _Px1;

      /** Corps du module **/
     Cpt  =  0 ;
     for( O  =  1 ;O <=  10 ; ++O){
       _Px1 =  Element_V10ATssic ( *Z , O   ) ;
       Cpt  =  Cpt + Nb_age_arb ( &_Px1, & *K , & *S ) ;

     } ;
     Nb_age_tab2  =  Cpt ;

     return Nb_age_tab2 ;
    }
  void Remp_nv_structure (Typevect_V10ATssic *A , Pointeur_ATiic *D)
    {
      /** Variables locales **/
      Typestr_Tiic Som;
      int I;
      string2 K;

      /** Corps du module **/
     Som = malloc(sizeof(Type_Tiic));
     Som->Champ3 = malloc(2 * sizeof(char));
     K = malloc(2 * sizeof(char));
     for( I  =  1 ;I <=  100 ; ++I){
       strcpy (K,   "d") ;
       Aff_struct1_Tiic ( Som  , I ) ;
       Aff_struct2_Tiic ( Som  , Nb_age_tab ( & *A , & I , & K ) ) ;
       Aff_struct3_Tiic ( Som  , K ) ;
       if( Struct2_Tiic ( Som  ) != 0) {
         Inser_arb2 ( & *D , & Som ) ;

       } ;
       strcpy (K,   "r") ;
       Aff_struct1_Tiic ( Som  , I ) ;
       Aff_struct2_Tiic ( Som  , Nb_age_tab ( & *A , & I , & K ) ) ;
       Aff_struct3_Tiic ( Som  , K ) ;
       if( Struct2_Tiic ( Som  ) != 0) {
         Inser_arb2 ( & *D , & Som ) ;

       } ;

     } ;

    }
  int  Nb_noeud (Pointeur_ATiic *R)
    {
      /** Variables locales **/
      int  Nb_noeud2 ;
      Pointeur_ATiic _Px1;
      Pointeur_ATiic _Px2;

      /** Corps du module **/
     if( ( *R == NULL )) {
       Nb_noeud2  =  0 ;
       }
     else
       {
       _Px1 =  Fg_ATiic ( *R ) ;
       _Px2 =  Fd_ATiic ( *R ) ;
       Nb_noeud2  =  1 + Nb_noeud ( &_Px1) + Nb_noeud ( &_Px2) ;

     } ;

     return Nb_noeud2 ;
    }

  int main(int argc, char *argv[])
    {
     Noeud2 = malloc(sizeof(Type_Tiic));
     Noeud2->Champ3 = malloc(2 * sizeof(char));
     Tab = malloc(10 * sizeof(Pointeur_ATssic));
     int _Izw2;for (_Izw2=0; _Izw2<10; ++_Izw2)
       Tab[_Izw2] = malloc( sizeof(Pointeur_ATssic ));
     Noeud = malloc(sizeof(Type_Tssic));
     Noeud->Champ1 = malloc(255 * sizeof(char));
     Noeud->Champ2 = malloc(255 * sizeof(char));
     Noeud->Champ4 = malloc(2 * sizeof(char));
     M = malloc(2 * sizeof(char));
     FILE *f ;
     char s[25] ;
     int nd ,nr ;
     f=fopen("tp2.txt","r");
     for( I  =  1 ;I <=  50 ; I++)
        {

            Remp_noeud ( & Noeud ) ;
            Aff_struct3_Tssic ( Noeud  , Aleanombre(39 )+61 ) ;
            Aff_struct4_Tssic ( Noeud  , "d" ) ;
            Creernoeud_ATssic (& P ) ;
            Aff_element_V10ATssic ( Tab , I   , P ) ;
            Aff_info_ATssic ( P , Noeud ) ;
            fscanf(f,"%s\n",s);
            fscanf(f,"%d\n",&nd);
            if (nd>25) nd=25 ;
            for( J  =  1 ;J <=  nd ; J++)
              {
                  Remp_noeud ( & Noeud ) ;
                  Aff_struct3_Tssic ( Noeud  , Aleanombre(39 )+61 ) ;
                  Aff_struct4_Tssic ( Noeud  , "d" ) ;
                  Inser_arb ( & P , & Noeud ) ;

              }
            fscanf(f,"%d\n",&nr);
            if (nr>25) nr=25 ;
            for( J  =  1 ;J <=  nr ; J++)
              {
                  Remp_noeud ( & Noeud ) ;
                  Aff_struct3_Tssic ( Noeud  , Aleanombre(59 )+1 ) ;
                  Aff_struct4_Tssic ( Noeud  , "r" ) ;
                  Inser_arb ( & P , & Noeud ) ;

              }
          } ;
     color(15,0);
     printf ( "la premier structure est : \n" ) ;
     Afficher_tab ( & Tab ) ;
     Remp_nv_structure ( & Tab , & Arbre ) ;
     color(15,0);
     printf ( "la nouvelle structure est : \n" ) ;
     Afficher_arb2 ( & Arbre ) ;
     color(15,0);
     printf (" donner l interevalle [A , B] des ages avec le resultat .\n " ) ;
     printf ( " donner A : " ) ;
     scanf ( " %d", &N ) ;
     printf (" \n  donner B : " ) ;
     scanf ( " %d", &I ) ;
     printf ( " \n  donner le resultat (r/d) : " ) ;
     scanf ( " %s", M ) ;
     B  =  Nb_noeud ( & Arbre ) ;
     A  =  100 * Nb_age_arb2 ( & Arbre , & N , & I , & M ) ;
     printf ( " \n %d", Divis(&A,&B) ) ;
     printf ( " %s \n", "%" ) ;


      system("PAUSE");
      return 0;
    }
