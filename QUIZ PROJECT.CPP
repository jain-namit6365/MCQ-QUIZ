#include<fstream>
#include<iostream>
#include<conio.h>
#include<process.h>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
#include<ctime>
#include "windows.h"

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#define LENGTH         128
#define ENTER           13
#define BACKSPACE        8

using namespace std;

const char *crpass="project";       //password for starting the program
const char *pass="project";         //password for accessing the file records

class Quiz
{ private : char name[50];
	    int age;
	    char sex;
	    unsigned long int phone;
	    int score;
	    char grade;
	    long rank;
	    long id;
	    int cor;
	    int wro;
	    int unt;
	    void calcgrade()
	    { if(score>=35)
		grade='A';
	      else if(score>=30)
		grade='B';
	      else if(score>=20)
		grade='C';
	      else if(score>=10)
		grade='D';
	      else if(score>=0)
		grade='E';
	      else
		grade='F';
	    }
  public : Quiz()
	   { score=0;
	     grade='-';
	     strcpy(name, "NaN");
	     age=0;
	     sex='N';
	     phone=0;
	     rank=0;
	     id=0;
	     cor=0;
	     wro=0;
	     unt=0;
	   }
	   void getinfo()
	   { cout<<"Enter name             : ";
         cin.ignore();
	     cin.getline(name, 50);
	     cout<<"Enter Age              : ";
	     cin>>age;
	     cout<<"Enter Sex (M/F)        : ";
	     cin>>sex;
	     cout<<"Enter Phone number     : ";
	     cin>>phone;
	   }
	   void showinfo()
	   { cout<<"Id       : "<<id<<endl;
	     cout<<"Name     : "<<name<<endl;
	     cout<<"Age      : "<<age<<endl;
	     cout<<"Sex      : "<<sex<<endl;
	     cout<<"Phone    : "<<phone;
	   }
	   void result()
	   { cout<<"Score                    :"<<score;
	     cout<<"\nCorrect answers          :"<<cor;
	     cout<<"\nIncorrect answers        :"<<wro;
	     cout<<"\nUnattempted questions    :"<<unt;
	     calcgrade();
	     cout<<"\nGrade                    :"<<grade;
	     cout<<"\nRank                     :"<<rank;
	   }
	   void ques1()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Who was the 1st woman to score century in international T20 cricket? |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Deandra Dottin \nb) Shanel Daley \nc) Stacy-Ann King \nd) Cordel Jack \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') ";
	     cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a'||ans=='A')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4;
	       cor++;
	     }
	     else if(ans=='L')
	     {exit(0);}
	     else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";
	      unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is DEANDRA DOTTIN \n";
	       score-=1;
	       wro++;
	     }
	   }
	   void ques2()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of these is a make of trucks of Czech origin, used by the      |\n";
	     cout<<"|   Indian army?                                                         |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Mercedes Benz \nb) Tatra \nc) Sikorsky \nd) MiG \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4;
	       cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";
	     unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is TATRA\n";
	       score-=1;
	       wro++;
	     }
	   }
	   void ques3()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Gyaneshwari, Lichchavi, Gorakdham and Sarayu are all names of what?  |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Saree Types \nb) Rivers \nc) Express Trains \nd) Buddhist Monasteries \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c'||ans=='C')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is EXPRESS TRAINS \n";
	       score-=1;wro++;
	     }
	   }
	   void ques4()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of these films has a tag line 'Every Child is Special'?        |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Paa \nb) Koi Mil Gaya \nc) Taare Zameen Par \nd) Paathshaala \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c'||ans=='C')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is TAARE ZAMEEN PAR \n";
	       score-=1;wro++;
	     }
	   }
	   void ques5()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which temple is believed to have first built in gold, then silver,   |\n";
	     cout<<"|   then wood and finally stone?                                         |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Somnath Temple \nb) Kashi Vishwanath \nc) Khajuraho Temple \nd) Mahakaal Temple \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a'||ans=='A')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is SOMNATH TEMPLE \n";
	       score-=1;wro++;
	     }
	   }
	   void ques6()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which among the following never became President of Pakistan?        |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Mohammad Ali Zinnah \nb) Iskander Mirza \nc) Asif Ali Zardari \nd) Zulfikar Ali Bhutto \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a'||ans=='A')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is MOHAMMAD ALI ZINNAH \n";
	       score-=1;wro++;
	     }
	   }
	   void ques7()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Whose birthday is celebrated as 'Engineers' Day' in India?           |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) A P J Abdul Kalam \nb) John C. Gammon \nc) M Visvesvarayya \nd) Soren Krisitian Toubro \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c'||ans=='C')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is M VISVESVARAYYA \n";
	       score-=1;wro++;
	     }
	   }
	   void ques8()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which is the largest passenger airliner in the world?                |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Boeing 767 \nb) Airbus A380 \nc) Ilyushin IL-96 \nd) Boeing 787 \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is AIRBUS A380 \n";
	       score-=1;wro++;
	     }
	   }
	   void ques9()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of these women has not partnered Leander Paes winning Mixed    |\n";
	     cout<<"|   Doubles titles at Grand Slam tennis?                                 |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Martina Navratilova \nb) Cara Black \nc) Lisa Raymond \nd) Rika Hiraki \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='d')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is RIKA HIRAKI \n";
	       score-=1;wro++;
	     }
	   }
	   void ques10()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.To whom did Jawaharlal Nehru dedicate his book 'The Discovery of     |\n";
	     cout<<"|   India'?                                                              |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Mill workers of Ahmedabad \nb) Prisoners of Ahmed Nagar Jail \nc) Family in Alahabad \nd) People of India \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER\n";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is PRISNORS OF AHMED NAGAR JAIL \n";
	       score-=1;wro++;
	     }
	   }
	   void ques11()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.In which film does Rajesh Khanna tell his heroine, 'Pushpa, I hate   |\n";
	     cout<<"|   tears'?                                                              |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Aradhana \nb) Kati Patang \nc) Amar Prem \nd) Daag \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c'||ans=='C')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER\n";
	       cout<<"Correct answer is AMAR PREM \n";
	       score-=1;wro++;
	     }
	   }
	   void ques12()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which year in the western calender corresponds to the beginning of   |\n";
	     cout<<"|   the Saka Era, on which the Indian National Calender based?           |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) 78 B.C. \nb) A.D. 78 \nc) A.D. 1757 \nd) A.D. 1947 \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is A.D. 78 \n";
	       score-=1;wro++;
	     }
	   }
	   void ques13()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.On being produced before magistrate, who gave his name as 'Azad',    |\n";
	     cout<<"|   father's name as 'Swatantra' and residence as 'Jail'?                |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Ram Prasad Bismil \nb) Chandrashekhar Tiwari \nc) Rajendra Lahiri \nd) Ashfaqullah Khan \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	      unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is CHANDRASHEKHAR TIWARI \n";
	       score-=1;wro++;
	     }
	   }
	   void ques14()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.In mobile phones what are monophonic and polyphonic?                 |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Dial tone \nb) Display screen \nc) Text messages \nd) Ring tone \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;

	     if(ans=='d'||ans=='D')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is RING TONE \n";
	       score-=1;wro++;
	     }
	   }
	   void ques15()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Who began his speech with 'Sisters and Brothers of America' at the   |\n";
	     cout<<"|   world parliament of religions at Chicago in 11 sept 1893?            |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Ramkrishna Paramhansa \nb) Dayanand Saraswati \nc) Swami Vivekananda \nd) Rabindranath Tagore \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c'||ans=='C')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is SWAMI VIVEKANANDA \n";
	       score-=1;wro++;
	     }
	   }
	   void ques16()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.What was the world's first clone animal?                             |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Chimpanzee \nb) Sheep \nc) Rabbit \nd) Goat \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is SHEEP \n";
	       score-=1;wro++;
	     }
	   }
	   void ques17()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of the following Prime Ministers was not born in what is now   |\n";
	     cout<<"|   Pakistan?                                                            |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Gulzarilal Nanda \nb) IK Gujral \nc) Manmohan Singh \nd) Moraji Desai \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='d'||ans=='D')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is MORAJI DESAI \n";
	       score-=1;wro++;
	     }
	   }
	   void ques18()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of these Chief Minister of an Indian State is an IIT Graduate? |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Manohar Parrikar \nb) Okram Ibobi Singh \nc) Kiran Kumar Reddy \nd) Omar Abdullah \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a'||ans=='A')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is MANOHAR PARRIKAR \n";
	       score-=1;wro++;
	     }
	   }
	   void ques19()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Which of these buildings in Rajasthan was built to provide           |\n";
	     cout<<"|   employment to people during a period of famine?                      |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Amber Fort \nb) Hawa Mahal \nc) Mehrangarh Fort \nd) Umaid Bhawan palace \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='d'||ans=='D')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is UMAID BHAWAN PALACE \n";
	       score-=1;wro++;
	     }
	   }
	   void ques20()
	   { char ans;
	     cout<<"|------------------------------------------------------------------------|\n";
	     cout<<"| Q.Douglas Engelbert, who passed away in 2013, is credited as the       |\n";
	     cout<<"|   inventor of which of these products ?                                |\n";
	     cout<<"|------------------------------------------------------------------------|\n\n";
	     cout<<"a) Mobile Phone \nb) Computer Mouse \nc) Bluetooth Mouse \nd) Digital camera \n\n";
	     cout<<"(-> To leave the ques unattempted press 'x/X'\n ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b'||ans=='B')
	     { cout<<"\n\nCORRECT ANSWER";
	       score+=4; cor++;
	     }
              else if(ans=='L')
	     {exit(0);}
	      else if(ans=='x'|| ans=='X')
	     {cout<<"\n\nQUESTION UNATTEMPTED\n";unt++;
	     }
	     else
	     { cout<<"\n\nWRONG ANSWER \n";
	       cout<<"Correct answer is COMPUTER MOUSE \n";
	       score-=1;wro++;
	     }
	   }
	   void q1()
	   { char ans;
	     cout<<"|-----------------------------------------------|\n";
	     cout<<"| Q. What is T in ATM, with respect to banking? |\n";
	     cout<<"|-----------------------------------------------|\n\n";
	     cout<<"(a) Transaction\n(b) Telebanking\n(c) Teller\n(d) Teleporting\n\n";
	     cout<<"(->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='c')
	     { cout<<"\n\n!!! CONGRATULATIONS !!!    Correct Answer";
	       cout<<"\n\nNow you can participate in the Quiz";
	     }
              else if(ans=='L')
	     {exit(0);}
	     else
	     { cout<<"\n\n!!! SORRY !!!    Wrong Answer";
	       cout<<"\n\nTry again next time";
	       getch(); exit(0);
	     }
	   }
	   void q2()
	   { char ans;
	     cout<<"|------------------------------------------------|\n";
	     cout<<"| Q. Which of these constitutional positions has |\n";
	     cout<<"|    never been held by a woman in India?        |\n";
	     cout<<"|------------------------------------------------|\n\n";
	     cout<<"(a) President\n(b) Vice President\n(c) Chief minister\n(d) State Governor\n\n";
	     cout<<"( ->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='b')
	     { cout<<"\n\n!!! CONGRATULATIONS !!!    Correct Answer";
	       cout<<"\n\nNow you can participate in the Quiz";
	     }
              else if(ans=='L')
	     {exit(0);}
	     else
	     { cout<<"\n\n!!! SORRY !!!    Wrong Answer";
	       cout<<"\n\nTry again next time";
	       getch(); exit(0);
	     }
	   }
	   void q3()
	   { char ans;
	     cout<<"|------------------------------------------------|\n";
	     cout<<"| Q. Which Indian company acquired the British   |\n";
	     cout<<"|    car-maker Jaguar Land Rover in 2008?        |\n";
	     cout<<"|------------------------------------------------|\n\n";
	     cout<<"(a) Mahindra and Mahindra\n(b) Maruti Udyog\n(c) Ashok Leyland\n(d) Tata Motors\n\n";
	     cout<<"(->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='d')
	     { cout<<"\n\n!!! CONGRATULATIONS !!!    Correct Answer";
	       cout<<"\n\nNow you can participate in the Quiz";
	     }
              else if(ans=='L')
	     {exit(0);}
	     else
	     { cout<<"\n\n!!! SORRY !!!    Wrong Answer";
	       cout<<"\n\nTry again next time";
	       getch(); exit(0);
	     }
	   }
	   void q4()
	   { char ans;
	     cout<<"|------------------------------------------------|\n";
	     cout<<"| Q. Which of these states share its border with |\n";
	     cout<<"|    only one other Indian State?                |\n";
	     cout<<"|------------------------------------------------|\n\n";
	     cout<<"(a) Sikkim\n(b) Jammu and Kashmir\n(c) Tripura\n(d) Himachal Pradesh\n\n";
	     cout<<"(->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a')
	     { cout<<"\n\n!!! CONGRATULATIONS !!!    Correct Answer";
	       cout<<"\n\nNow you can participate in the Quiz";
	     }
              else if(ans=='L')
	     {exit(0);}
	     else
	     { cout<<"\n\n!!! SORRY !!!    Wrong Answer";
	       cout<<"\n\nTry again next time";
	       getch(); exit(0);
	     }
	   }
	   void q5()
	   { char ans;
	     cout<<"|------------------------------------------------|\n";
	     cout<<"| Q. What right is given to children through the |\n";
	     cout<<"|    RTE Act passed by the Government?           |\n";
	     cout<<"|------------------------------------------------|\n\n";
	     cout<<"(a) Education\n(b) Internet\n(c) Entertainment\n(d) Employment\n\n";
	     cout<<"(->To leave the quiz,press 'L') "; cout<<"\nEnter your answer : ";
	     cin>>ans;
	     if(ans=='a')
	     { cout<<"\n\n!!! CONGRATULATIONS !!!    Correct Answer";
	       cout<<"\n\nNow you can participate in the Quiz";
	     }
              else if(ans=='L')
	     {exit(0);}
	     else
	     { cout<<"\n\n!!! SORRY !!!    Wrong Answer";
	       cout<<"\n\nTry again next time";
	       getch(); exit(0);
	     }
	   }
	   void getrank(long x)
	   { rank=x;
	   }
	   long retrank()
	   { return rank;
	   }
	   int retscore()
	   { return score;
	   }
	   void getid(long x)
	   { id=x;
	   }
	   long retid()
	   { return id;
	   }
};
Quiz parresult(Quiz q)              //showing the result to the user
{ Quiz q1;
  fstream abc;
  abc.open("Information.dat",ios::in|ios::binary);
  while(!abc.eof())
  { abc.read((char*)&q1,sizeof(q1));
    if(abc.eof())
      break;
    if(q.retid()==q1.retid())
    { q1.showinfo();
      cout<<endl;
      q1.result();
    }
  }
  abc.close();
}
Quiz storeinfo(Quiz q)           //storing result in the sorted file
{ Quiz q1;
  fstream abc,def;
  abc.open("Information.dat",ios::in|ios::binary);
  def.open("Temp.dat",ios::app|ios::binary);
  if(!abc)
  { cout<<"File not present";
    getch();
    exit(0);
  }
  char last='y';
  int i=1,j=0;
  long r=0;
  while(!abc.eof())
  { abc.read((char*)&q1,sizeof(q1));
    if(abc.eof())
      break;
    q.getrank(i);
    i++;
    if(q.retscore()>=q1.retscore())
    { if(j==1)
      { r=q1.retrank()+1;
	q1.getrank(r);
	def.write((char*)&q1,sizeof(q1));
      }
      else
      { def.write((char*)&q,sizeof(q));
	last='n';
	j=1;
	if(q1.retrank()!=0)
	{ r=q1.retrank()+1;
	  q1.getrank(r);
	  def.write((char*)&q1,sizeof(q1));
	}
      }
    }
    else
      def.write((char*)&q1,sizeof(q1));
  }
  if(last=='y')
  { q.getrank(i);
    def.write((char*)&q,sizeof(q));
  }
  abc.close();
  def.close();
  remove("Information.dat");
  rename("Temp.dat","Information.dat");
}
Quiz showresult(Quiz q)                 //showing all results to the user
{

//char *password = getpass("Enter Password : ");
//OR
cout<<"Enter Password : ";
char password[LENGTH];
char ch;
int pos=0;
while(true)
     {
       ch=getch();
       if(pos>=LENGTH) {cout<<'\a'; continue;} //beep if password is too long

       if(ch==ENTER) break;  //User have pressed ENTER

       else if(ch==BACKSPACE)  //BACKSPACE was pressed
         {
           cout <<"\b \b";
           password[--pos]='\0';
         }
       else// A..Z a...z
         {
           cout <<"*";
           password[pos++]=ch;
           password[pos]='\0';
         }
       if(pos<=0) pos=0;
     }

if(strcmp(password,crpass)==0)
{ fstream abc;
  int i=0,j=0;
  system("cls");
  abc.open("Information.dat",ios::in|ios::binary);
  if(!abc)
  { cout<<"File not Present";
    getch();
    exit(0);
  }
  while(!abc.eof())
  { abc.read((char*)&q,sizeof(q));
    if(abc.eof())
      break;
    i++;
    j=1;
    q.showinfo();
    cout<<"\n";
    q.result();
    cout<<"\n\n";
    if(i==2)
    { cout<<"Press any key to view more ";
      getch();
      i=0;
      system("cls");
    }
  }
  if(j==0)
    cout<<"No Record Found";
  abc.close();
}
else
{ cout<<"Incorrect Password !!!";
  getch();
}
}
Quiz getinfo(Quiz q)                 //searching and displaying info of specific participant
{
//char *password=getpass("Enter Password : ");
//OR
cout<<"Enter Password : ";
char password[LENGTH];
char ch;
int pos=0;
while(true)
     {
       ch=getch();
       if(pos>=LENGTH) {cout<<'\a'; continue;} // beep if password is too long

       if(ch==ENTER) break;  // User have pressed ENTER

       else if(ch==BACKSPACE)  // BACKSPACE was pressed
         {
           cout <<"\b \b";
           password[--pos]='\0';
         }
       else // A..Z a...z
         {
           cout <<"*";
           password[pos++]=ch;
           password[pos]='\0';
         }
       if(pos<=0) pos=0;
     }

if(strcmp(password,crpass)==0)
{
  system("cls");
  fstream abc;
  abc.open("Information.dat",ios::in|ios::binary);
  if(!abc)
  { cout<<"File not present";
    getch();
    exit(0);
  }
  long ph;
  int c=0;
  cout<<"Enter Id of participant to be searched : ";
  cin>>ph;
  while(!abc.eof())
  { abc.read((char*)&q,sizeof(q));
    if(abc.eof())
      break;
    if(q.retid()==ph)
    { q.showinfo();
      cout<<endl;
      q.result();
      c=1;
    }
  }
  if(c==0)
   cout<<"Record not present";
  abc.close();
}
else
{ cout<<"Incorrect Password !!!";
  getch();
}
}
Quiz deleteinfo(Quiz q)          //deleting info of specific participant
{
//char*password=getpass("Enter Password : ");
//OR
cout<<"Enter Password : ";
char password[LENGTH];
char ch;
int pos=0;
while(true)
     {
       ch=getch();
       if(pos>=LENGTH) {cout<<'\a'; continue;} // beep if password is too long

       if(ch==ENTER) break;  // User have pressed ENTER

       else if(ch==BACKSPACE)  // BACKSPACE was pressed
         {
           cout <<"\b \b";
           password[--pos]='\0';
         }
       else// A..Z a...z
         {
           cout <<"*";
           password[pos++]=ch;
           password[pos]='\0';
         }
       if(pos<=0) pos=0;
     }

if(strcmp(password,crpass)==0)
{
  system("cls");
  fstream abc,def;
  abc.open("Information.dat",ios::in|ios::binary);
  def.open("Temp.dat",ios::app|ios::binary);
  if(!abc)
  { cout<<"File not present";
    getch();
    exit(0);
  }
  long ph;
  char confirm='n';
  int c=0;
  long r=0,i=0;
  cout<<"Enter id of participant whose information is to be deleted : ";
  cin>>ph;
  while(!abc.eof())
  { abc.read((char*)&q,sizeof(q));
    if(abc.eof())
      break;
    if(q.retid()==ph)
    { q.showinfo();
      cout<<endl;
      q.result();
      c=1;
      cout<<"\n\nAre you sure you want to delete this record? (y/n) : ";
      cin>>confirm;
      if(confirm=='y'||confirm=='Y')
	cout<<"Record Deleted";
      else
	def.write((char*)&q,sizeof(q));
    }
    else
    { if(confirm=='y'||confirm=='Y')
      { r=q.retrank()-1;
	q.getrank(r);
      }
      def.write((char*)&q,sizeof(q));
    }
  }
  if(c==0)
    cout<<"!!!!! Record not Found !!!!!";
  abc.close();
  def.close();
  remove("Information.dat");
  rename("Temp.dat","Information.dat");
}
else
{ cout<<"Incorrect Password !!!";
  getch();
}
}
Quiz getid(Quiz q)
{ Quiz q1;
  fstream abc;
  int i=0;
  long Id=0;
  abc.open("Information.dat",ios::in|ios::binary);
  while(!abc.eof())
  { abc.read((char*)&q1,sizeof(q1));
    if(abc.eof())
      break;
    i=1;
    if(Id<=q1.retid())
      Id=q1.retid()+1;
    q.getid(Id);
  }
  if(i==0)
  { Id=1;
    q.getid(Id);
  }
  Id=q.retid();
  cout<<"Your id is "<<Id;
  return q;
}
int main()
{
  system("cls");
  srand(time(0));
gotoxy(32,1);cout<<"PROGRAM OF QUIZ \n\n";
//char*password=getpass("Enter Password : ");
//OR
cout<<"Enter Password : ";
char password[LENGTH];
char ch;
int pos=0;
while(true)
     {
       ch=getch();
       if(pos>=LENGTH) {cout<<'\a'; continue;} // beep if password is too long

       if(ch==ENTER) break;  // User have pressed ENTER

       else if(ch==BACKSPACE)  // BACKSPACE was pressed
         {
           cout <<"\b \b";
           password[--pos]='\0';
         }
       else// A..Z a...z
         {
           cout <<"*";
           password[pos++]=ch;
           password[pos]='\0';
         }
       if(pos<=0) pos=0;
     }

if(strcmp(password,pass)==0)
{
  system("cls");
  char c;
do{
  Quiz q;
  int ch=0,a=0,k[10],i=0,j=0;
  fstream abc;
  abc.open("Information.dat",ios::app|ios::binary);
  abc.close();
  for(i=0;i<10;i++)
  { k[i]=0; }
  gotoxy(32,4);
  cout<<"CHOICES\n\n ";
  cout<<"\n1. Play the Quiz";
  cout<<"\n2. Display the information of all Participants";
  cout<<"\n3. Display the information of a specific participant with the help of his/ ";
  cout<<"\n   her Id";
  cout<<"\n4. Delete information of a specific participant with the help of his/her Id";
  cout<<"\n5. Close the Program";
  cout<<"\n\nEnter choice : ";            //taking choice from the user
  cin>>ch;
  system("cls");
  switch(ch)
  { case 1: cout<<"******************************************************************************";
	    cout<<"\n******************************************************************************";
	    cout<<"\n**||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||**";
	    cout<<"\n**||                    ------------------------------                    ||**";
	    cout<<"\n**||             <<<<<  WELCOME TO THE GRAND QUIZ SHOW  >>>>>             ||**";
	    cout<<"\n**||                    ------------------------------                    ||**";
	    cout<<"\n**||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||**";
	    cout<<"\n******************************************************************************";
	    cout<<"\n******************************************************************************";
	    cout<<"\n\n\n";
	    cout<<"Comply by the following rules to play this Quiz : ";
	    cout<<"\n@ You will first have to answer a qualification question to participate in the Quiz.";
	    cout<<"\n@ There would be 10 questions in the Quiz.";
	    cout<<"\n@ Each correct answer will get you 4 marks.";
	    cout<<"\n@ For every wrong answer 1 mark will be deducted.";
	    cout<<"\n@ For every unattemted question 0 marks will be awarded.";
	    cout<<"\n@ Attempt the questions answering with 'a','b','c','d'(or 'A','B','C','D').";
	    cout<<"\n@ Leave the question unattempted by answering with 'x' (or 'X').";
	    cout<<"\n\nPress any key to continue";
	    getch();
	    system("cls");
        gotoxy(32,1);
        cout<<"Qualification Question\n";
	    cout<<"Your qualification question is :-\n\n";
	    a = rand() % 5;
	    switch(a)                              //calling functions randomly
	    { case 0: q.q1(); break;
	      case 1: q.q2(); break;
	      case 2: q.q3(); break;
	      case 3: q.q4(); break;
	      case 4: q.q5();
	    }
	    cout<<"\n\nPress any key to continue";
	    getch();
	    system("cls");
        gotoxy(37,1);
        cout<<"DETAILS\n";
	    cout<<"Enter your information : \n";
	    q.getinfo();
	    q=getid(q);
	    cout<<"\n\nPress any key to continue";
	    getch();
	    system("cls");
	    for(i=0;i<10;i++)               //loop to display 10 questions
	    { abc:                          //conditions so that no 2 questions gets repeated
	      a=rand() % 20 +1;
	      for(j=0;j<10;j++)
	      { if(a==k[j])
                goto abc;
	      }
	      k[i]=a;
	      switch(a)                     //calling functions randomly
	      { case 1: q.ques1(); break;
		case 2: q.ques2(); break;
		case 3: q.ques3(); break;
		case 4: q.ques4(); break;
		case 5: q.ques5(); break;
		case 6: q.ques6(); break;
		case 7: q.ques7(); break;
		case 8: q.ques8(); break;
		case 9: q.ques9(); break;
		case 10: q.ques10(); break;
		case 11: q.ques11(); break;
		case 12: q.ques12(); break;
		case 13: q.ques13(); break;
		case 14: q.ques14(); break;
		case 15: q.ques15(); break;
		case 16: q.ques16(); break;
		case 17: q.ques17(); break;
		case 18: q.ques18(); break;
		case 19: q.ques19(); break;
		case 20: q.ques20();
	      }
	      cout<<"\n\nPress any key to continue";
	      getch();
	      system("cls");
	    }
	    storeinfo(q);
	    parresult(q);
	    break;
    case 2: showresult(q);
	    cout<<"All records shown";
	    break;
    case 3: getinfo(q);
	    break;
    case 4: deleteinfo(q);
	    break;
    case 5: exit(0);
        break;
    default: cout<<"!!!!! WRONG CHOICE !!!!!";
  }
  cout<<"\n\nPress any key to continue";
  getch();
  system("cls");
  cout<<"\nDo you want to do more operations (Y/N) : ";   //asking user to continue using the program
  cin>>c;
  cout<<endl;
}while(c=='y'||c=='Y');
}
else
  cout<<"\n\nIncorrect Password";
cout<<"\n\nProject made by Namit Jain";
getch();
}
