main ()
{
  int count;
  char str1[30];
  char str2[30];
  printf ("Digite uma string:");
  gets (str1);//  scanf ("%s",&str1);
 
  for (count=0;str1[count] !='\0';count++)
    str2[count]=str1[count];
  str2[count]='\0';
   
  printf ("Str2: ");
  for (count=0;str2[count] !='\0';count++)
    printf ("%c",str2[count]); 
    //printf ("%s",str2);

getch();
}
