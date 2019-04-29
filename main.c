/* this code ables the user to encrypt and decrypt rotation and substitution 
cipher given a message and rotation amount and alphabet key..when ran this 
program opens a menu in which you will choose to either 'decrypt' or 'encrypt'
a message with entering the number 1 or 2.this will then take you to another
menu which will give you the option of using rotaion cipher or substitution 
cipher */
#include <stdio.h>

int
main ()
{
  int x;			//declaring integer x
  printf ("please select either option by typing '1' or '2'\n");	//print menu
  printf ("(1)encrpytion\n");	//print menu
  printf ("(2)decrpytion\n");	//print menu
  printf ("choose your option?: ");	//print menu
  scanf ("%d", &x);		//scan menu input and place in integer x
  if (x == 1)			//if x equals 1 (if user pressed 1 and entered)
    {
      printf ("(1)encryption using ceaser cipher\n");	//menu for encryption
      printf ("(2)encryption using substitution cipher\n");//print menu
      printf ("choose your option?: ");//print menu
      scanf ("%d", &x);//scan menu input and place in integer x
    }
  else if (x == 2)//if x equals 2 (if user pressed 2 and entered)
    {
      printf ("(1)Decryption of a ceaser chipher text\n");//menu for decryption
      printf ("(2)Decryption of a substitution chipher text \n");//menu for decryption
      printf ("choose your option?: ");//menu for decryption
      scanf ("%d", &x);//scan menu input and place in integer x
      x = x + 2; //plus 2 to x

    }
  else
    {
      printf ("did not choose '1' or '2'\n"); //print error code if user did not unput correctly
      return 0;
    }


  if (x == 1)//if user chose '1' option and '1'option again
    {
      char msg[100], l;//declare char and size
      int i, ro;//delcare integer

      printf ("Enter a message to encrypt: ");//ask for message
      scanf (" %[^\t\n]s", &msg);//scan message
      printf ("Enter rotation key: ");//ask for rotation key
      scanf ("%d", &ro);//scan rotation key

      for (i = 0; msg[i] != '\0'; ++i)//for loop conditions
	{
	  l = msg[i];//declaring l to one 'integer' of the message

	  if (l >= 'a' && l <= 'z')//loop conditions
	    {
	      l = l + ro;//loop conditions

	      if (l > 'z')//if conditons
		{
		  l = l - 'z' + 'a' - 1;//looping z back to start of a
		}

	      msg[i] = l;//declaring interger on message to l
	    }
	  else if (l >= 'A' && l <= 'Z')//loop conditions
	    {
	      l = l + ro;//loop conditions

	      if (l > 'Z')//if conditons
		{
		  l = l - 'Z' + 'A' - 1;//looping z back to start of a
		}

	      msg[i] = l;//declaring interger on message to l
	    }
	}

      printf ("Encrypted message: %s", &msg);//print encrypted message result

      return 0;
    }
  else if (x == 2)//if user chose '1' option and '2'option again
    {
      char msg[100], ch;//declare char and size
      int i, key;//declare interger i and key
      char a1[10], b1[10], c1[10], d1[10], e1[10], f1[10], g1[10], h1[10],//declare char and size
	i1[10], j1[10], k1[10], l1[10], m1[10], n1[10], o1[10], p1[10],
	q1[10], r1[10], s1[10], t1[10], u1[10], v1[10], w1[10], x1[10],
	y1[10], z1[10];
      printf ("Enter a message to encrypt: ");//ask for message
      scanf (" %[^\t\n]s", &msg);//scan message
      
      printf ("a= ");  // ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("b= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", b1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("c= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", c1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("d= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", d1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("e= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", e1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("f= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", f1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("g= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", g1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("h= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", h1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("i= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", i1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("j= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", j1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("k= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", k1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("l= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", l1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("m= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", m1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("n= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", n1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("o= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", o1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("p= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", p1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("q= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", q1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("r= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", r1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("s= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", s1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("t= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", t1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("u= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", u1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("v= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", v1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("w= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", w1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("x= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", x1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("y= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", y1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("z= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      scanf ("%s", z1);// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("Encrypted message: ");//print encrypted message result
      for (i = 0; msg[i] != '\0'; ++i)//for loop conditions
	{
	  ch = msg[i];//declare ch(aracter) as integer i of message

	  if (ch == 'a')//if letter is found
	    {
	      printf ("%s", &a1);//print letter substitute
	    }
	  else if (ch == 'b')//if letter is found
	    {
	      printf ("%s", &b1);//print letter substitute
	    }
	  else if (ch == 'c')//if letter is found
	    {
	      printf ("%s", &c1);//print letter substitute
	    }
	  else if (ch == 'd')//if letter is found
	    {
	      printf ("%s", &d1);//print letter substitute
	    }
	  else if (ch == 'e')//if letter is found
	    {
	      printf ("%s", &e1);//print letter substitute
	    }
	  else if (ch == 'f')//if letter is found
	    {
	      printf ("%s", &f1);//print letter substitute
	    }
	  else if (ch == 'g')//if letter is found
	    {
	      printf ("%s", &g1);//print letter substitute
	    }
	  else if (ch == 'h')//if letter is found
	    {
	      printf ("%s", &h1);//print letter substitute
	    }
	  else if (ch == 'i')//if letter is found
	    {
	      printf ("%s", &i1);//print letter substitute
	    }
	  else if (ch == 'j')//if letter is found
	    {
	      printf ("%s", &j1);//print letter substitute
	    }
	  else if (ch == 'k')//if letter is found
	    {
	      printf ("%s", &k1);//print letter substitute
	    }
	  else if (ch == 'l')//if letter is found
	    {
	      printf ("%s", &l1);//print letter substitute
	    }
	  else if (ch == 'm')//if letter is found
	    {
	      printf ("%s", &m1);//print letter substitute
	    }
	  else if (ch == 'n')//if letter is found
	    {
	      printf ("%s", &n1);//print letter substitute
	    }
	  else if (ch == 'o')//if letter is found
	    {
	      printf ("%s", &o1);//print letter substitute
	    }
	  else if (ch == 'p')//if letter is found
	    {
	      printf ("%s", &p1);//print letter substitute
	    }
	  else if (ch == 'q')//if letter is found
	    {
	      printf ("%s", &q1);//print letter substitute
	    }
	  else if (ch == 'r')//if letter is found
	    {
	      printf ("%s", &r1);//print letter substitute
	    }
	  else if (ch == 's')//if letter is found
	    {
	      printf ("%s", &s1);//print letter substitute
	    }
	  else if (ch == 't')//if letter is found
	    {
	      printf ("%s", &t1);//print letter substitute
	    }
	  else if (ch == 'u')//if letter is found
	    {
	      printf ("%s", &u1);//print letter substitute
	    }
	  else if (ch == 'v')//if letter is found
	    {
	      printf ("%s", &v1);//print letter substitute
	    }
	  else if (ch == 'w')//if letter is found
	    {
	      printf ("%s", &w1);//print letter substitute
	    }
	  else if (ch == 'x')//if letter is found
	    {
	      printf ("%s", &x1);//print letter substitute
	    }
	  else if (ch == 'y')//if letter is found
	    {
	      printf ("%s", &y1);//print letter substitute
	    }
	  else if (ch == 'z')//if letter is found
	    {
	      printf ("%s", &z1);//print letter substitute
	    }
	  else if (ch == ' ')//if spaced is found
	    {
	      printf (" ");//print space
	    }


	}


      return 0;
    }




  else if (x == 3)//if user chose '2' option and '1'option again
    {
      char message[100], ch;//declare char and size
      int i, key;//declare integr i and key

      printf ("Enter a message to decrypt: ");//ask for message to decrypt
      scanf (" %[^\t\n]s", &message);//scan message
      printf ("Enter key: ");//ask for rotation key
      scanf ("%d", &key);//scan rotation key

      for (i = 0; message[i] != '\0'; ++i)//for loop conditons
	{
	  ch = message[i];//declare that ch(aracter) equals an integer i of message

	  if (ch >= 'a' && ch <= 'z')//if ch is between a and z
	    {
	      ch = ch - key;//remove the roation key

	      if (ch < 'a')//if conditons
		{
		  ch = ch + 'z' - 'a' + 1;//rotations of a to z
		}

	      message[i] = ch;//declare integer of message as ch
	    }
	  else if (ch >= 'A' && ch <= 'Z')//loop condtions
	    {
	      ch = ch - key;//minus the rotation key

	      if (ch < 'A')//if conditions
		{
		  ch = ch + 'Z' - 'A' + 1;//loop from a to z
		}

	      message[i] = ch;//declare integer of message as ch
	    }
	}
      printf ("Decrypted message: %s", message);//prin decrypted message result
    }
  else if (x == 4)//if user chose '2' option and '2'option again
    {
      char message[100], ch;//declare char and size
      int i, key;//declare integer i and key
      char a1[10], b1[10], c1[10], d1[10], e1[10], f1[10], g1[10], h1[10],//declae char and size
	i1[10], j1[10], k1[10], l1[10], m1[10], n1[10], o1[10], p1[10],
	q1[10], r1[10], s1[10], t1[10], u1[10], v1[10], w1[10], x1[10],
	y1[10], z1[10];
      printf ("Enter a message to decrypt: ");//ask for message
      scanf (" %[^\t\n]s", &message);//scan message

      printf ("a= ");// ask for substitution of letter
      scanf ("%s", a1);//scan the substitution of the letter
      printf ("b= ");// ask for substitution of letter
      scanf ("%s", b1);//scan the substitution of the letter
      printf ("c= ");// ask for substitution of letter
      scanf ("%s", c1);//scan the substitution of the letter
      printf ("d= ");// ask for substitution of letter
      scanf ("%s", d1);//scan the substitution of the letter
      printf ("e= ");// ask for substitution of letter
      scanf ("%s", e1);//scan the substitution of the letter
      printf ("f= ");// ask for substitution of letter
      scanf ("%s", f1);//scan the substitution of the letter
      printf ("g= ");// ask for substitution of letter
      scanf ("%s", g1);//scan the substitution of the letter
      printf ("h= ");// ask for substitution of letter
      scanf ("%s", h1);//scan the substitution of the letter
      printf ("i= ");// ask for substitution of letter
      scanf ("%s", i1);//scan the substitution of the letter
      printf ("j= ");// ask for substitution of letter
      scanf ("%s", j1);//scan the substitution of the letter
      printf ("k= ");// ask for substitution of letter
      scanf ("%s", k1);//scan the substitution of the letter
      printf ("l= ");// ask for substitution of letter
      scanf ("%s", l1);//scan the substitution of the letter
      printf ("m= ");// ask for substitution of letter
      scanf ("%s", m1);//scan the substitution of the letter
      printf ("n= ");// ask for substitution of letter
      scanf ("%s", n1);//scan the substitution of the letter
      printf ("o= ");// ask for substitution of letter
      scanf ("%s", o1);//scan the substitution of the letter
      printf ("p= ");// ask for substitution of letter
      scanf ("%s", p1);//scan the substitution of the letter
      printf ("q= ");// ask for substitution of letter
      scanf ("%s", q1);//scan the substitution of the letter
      printf ("r= ");// ask for substitution of letter
      scanf ("%s", r1);//scan the substitution of the letter
      printf ("s= ");// ask for substitution of letter
      scanf ("%s", s1);//scan the substitution of the letter
      printf ("t= ");// ask for substitution of letter
      scanf ("%s", t1);//scan the substitution of the letter
      printf ("u= ");// ask for substitution of letter
      scanf ("%s", u1);//scan the substitution of the letter
      printf ("v= ");// ask for substitution of letter
      scanf ("%s", v1);//scan the substitution of the letter
      printf ("w= ");// ask for substitution of letter
      scanf ("%s", w1);//scan the substitution of the letter
      printf ("x= ");// ask for substitution of letter
      scanf ("%s", x1);//scan the substitution of the letter
      printf ("y= ");// ask for substitution of letter
      scanf ("%s", y1);//scan the substitution of the letter
      printf ("z= ");// ask for substitution of letter
      scanf ("%s", z1);//scan the substitution of the letter
      printf ("Decrypted message:");//print the decrypted message
      for (i = 0; message[i] != '\0'; ++i)//for loop conditions
	{

	  ch = message[i];//declare ch(aracter) as message integer

	  if (ch == 'a')//if letter is found
	    {
	      printf ("%s", &a1);//print letter substitute
	    }
	  else if (ch == 'b')//if letter is found
	    {
	      printf ("%s", &b1);//print letter substitute
	    }
	  else if (ch == 'c')//if letter is found
	    {
	      printf ("%s", &c1);//print letter substitute
	    }
	  else if (ch == 'd')//if letter is found
	    {
	      printf ("%s", &d1);//print letter substitute
	    }
	  else if (ch == 'e')//if letter is found
	    {
	      printf ("%s", &e1);//print letter substitute
	    }
	  else if (ch == 'f')//if letter is found
	    {
	      printf ("%s", &f1);//print letter substitute
	    }
	  else if (ch == 'g')//if letter is found
	    {
	      printf ("%s", &g1);//print letter substitute
	    }
	  else if (ch == 'h')//if letter is found
	    {
	      printf ("%s", &h1);//print letter substitute
	    }
	  else if (ch == 'i')//if letter is found
	    {
	      printf ("%s", &i1);//print letter substitute
	    }
	  else if (ch == 'j')//if letter is found
	    {
	      printf ("%s", &j1);//print letter substitute
	    }
	  else if (ch == 'k')//if letter is found
	    {
	      printf ("%s", &k1);//print letter substitute
	    }
	  else if (ch == 'l')//if letter is found
	    {
	      printf ("%s", &l1);//print letter substitute
	    }
	  else if (ch == 'm')//if letter is found
	    {
	      printf ("%s", &m1);//print letter substitute
	    }
	  else if (ch == 'n')//if letter is found
	    {
	      printf ("%s", &n1);//print letter substitute
	    }
	  else if (ch == 'o')//if letter is found
	    {
	      printf ("%s", &o1);//print letter substitute
	    }
	  else if (ch == 'p')//if letter is found
	    {
	      printf ("%s", &p1);//print letter substitute
	    }
	  else if (ch == 'q')//if letter is found
	    {
	      printf ("%s", &q1);//print letter substitute
	    }
	  else if (ch == 'r')//if letter is found
	    {
	      printf ("%s", &r1);//print letter substitute
	    }
	  else if (ch == 's')//if letter is found
	    {
	      printf ("%s", &s1);//print letter substitute
	    }
	  else if (ch == 't')//if letter is found
	    {
	      printf ("%s", &t1);//print letter substitute
	    }
	  else if (ch == 'u')//if letter is found
	    {
	      printf ("%s", &u1);//print letter substitute
	    }
	  else if (ch == 'v')//if letter is found
	    {
	      printf ("%s", &v1);//print letter substitute
	    }
	  else if (ch == 'w')//if letter is found
	    {
	      printf ("%s", &w1);//print letter substitute
	    }
	  else if (ch == 'x')//if letter is found
	    {
	      printf ("%s", &x1);//print letter substitute
	    }
	  else if (ch == 'y')//if letter is found
	    {
	      printf ("%s", &y1);//print letter substitute
	    }
	  else if (ch == 'z')//if letter is found
	    {
	      printf ("%s", &z1);//print letter substitute
	    }
	  else if (ch == ' ')//if space is found
	    {
	      printf (" ");//print space
	    }


	}
    }
  else//if all statements are not found
    {
      printf ("error please try again\n");//print error code
    }






  return 0;
}
