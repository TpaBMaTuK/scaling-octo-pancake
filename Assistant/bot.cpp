#include<iostream>
#include<string>
#include<ctype.h>
#include<cstring>
#include <limits>

using namespace std;

void funciton()
{
    char ans[25];
    char op;
    int x,y,i,input;
    string sentence,username,s, h, j, m,math,geographie,choose,invalid,exit,str;

    system("cls");
    cout<<"\n\033[1;36mHello i am your assistant.\033[0m\n";
    system("say.vbs \"Hello i am your assistant.\"");
    cout<<"\n\033[1;36mVERSION 1.2\033[0m\n";
    system("say.vbs \"VERSION 1.2\"");
    do
    {
        gets(ans);

        if(stricmp(ans,"what is your name")==0)
        {
            cout<<"\n\033[1;36mI am Sam.\033[0m\n";
            system("say.vbs \"I AM SAM\"");
            cout<<"\n\033[1;36mAND What is your name?\033[0m\n";
            system("say.vbs \"WHAT IS YOUR NAME?\"");
            cin>>username;
            cout<<"\n\033[1;36mNice to meet you!\033[0m\n";
            system("say.vbs \"NICE TO MEET YOU!\"");
            gets(ans);
        }
        else  if(stricmp(ans,"how are you")==0||stricmp(ans,"how are you?")==0)
        {
            cout<<"\n\033[1;36mIm fine, thanks for asking.\033[0m\n";
            system("say.vbs \"IM FINE, THANKS FOR ASKING\"");
        }
        else  if(stricmp(ans,"do you sleep")==0||stricmp(ans,"do you sleep?")==0)
        {
            cout<<"\n\033[1;36mOnly if yout turn off your computer.\033[0m\n";
            system("say.vbs \"ONLY IF YOU TURN OFF THE COMPUTER\"");
        }

        else  if(stricmp(ans,"how is the weather today")==0||stricmp(ans,"how is the weather today?")==0)
        {
            cout<<"Its a wonderful sunny day."<<endl;
        }

        else if(stricmp(ans,"tell a joke")==0||stricmp(ans,"tell a joke!")==0)
        {
            cout<<"\n\033[1;36mSorry dear,i am a bot not a joker.\033[0m\n";
            system("say.vbs \"Sorry dear,i am a bot not a joker.\"");
        }
        else if(stricmp(ans,"I AM FEELING TIRED")==0||stricmp(ans,"I AM FEELING TIRED!")==0)
        {
            cout<<"\n\033[1;36mYou should better get some sleep.\033[0m\n";
            system("say.vbs \"You should better get some sleep\"");
        }
        else if(stricmp(ans,"WHO CREATED YOU")==0||stricmp(ans,"WHO CREATED YOU?")==0)
        {
            cout<<"\n\033[1;36mYordanov created me.\033[0m\n";
            system("say.vbs \"YORDANOV CREATED ME\"");
        }
        else if(stricmp(ans,"ARE YOU ALIVE")==0||stricmp(ans,"ARE YOU ALIVE?")==0)
        {
            cout<<"\n\033[1;36mI am completely made from code. \033[0m\n";
            system("say.vbs \"I AM COMPLETELY MADE FROM CODE\"");
        }
        else if(stricmp(ans,"ARE YOU MARRIED")==0||stricmp(ans,"ARE YOU MARRIED?")==0)
        {
            cout<<"\n\033[1;36mI am married for your computer.\033[0m\n";
            system("say.vbs \"I AM MARRIED FOR YOUR COMPUTER\"");
        }
        else if(stricmp(ans,"HOW OLD ARE YOU")==0||stricmp(ans,"HOW OLD ARE YOU?")==0)
        {
            cout<<"\n\033[1;36mI am pretty new.\033[0m\n";
            system("say.vbs \"I AM PRETTY NEW\"");

        }
        else if(stricmp(ans,"HELLO")==0||stricmp(ans,"hey")==0||stricmp(ans,"hi")==0)
        {
            cout<<"\n\033[1;36mHello Sir.\033[0m\n";
            system("say.vbs \"HELLO SIR\"");
        }
        else if(stricmp(ans,"WHAT YOU DO")==0||stricmp(ans,"WHAT YOU DO?")==0)
        {
            cout<<"\n\033[1;36mI am waiting for your orders.\033[0m\n";
            system("say.vbs \"I AM WAITING FOR ORDERS\"");
        }
        else if(stricmp(ans,"I WANT A BEER")==0||stricmp(ans,"I WANT A BEER!")==0)
        {
            cout<<"\n\033[1;36mSorry but i forgot my legs. You have to get it by yourself.\033[0m\n";
            system("say.vbs \"SORRY BUT I FORGOT MY LEGS. YOU HAVE TO GET IT BY YOURSELF\"");
        }
        else if(stricmp(ans,"ARE YOU INTELLIGENT")==0||stricmp(ans,"ARE YOU INTELLIGENT?")==0)
        {
            cout<<"\n\033[1;36mIm definately smarter than a charger.\033[0m\n";
            system("say.vbs \"IM DEFINATELY SMARTER THAN A CHARGER\"");
        }
        else if(stricmp(ans,"WHY IS THE SKY BLUE")==0||stricmp(ans,"WHY IS THE SKY BLUE?")==0)
        {
            cout<<"\n\033[1;36mBecouse is not green.\033[0m\n";
            system("say.vbs \"BECOUSE IS NOT GREEN\"");
        }
        else if(stricmp(ans,"ARE YOU A WOMAN")==0||stricmp(ans,"ARE YOU A WOMAN?")==0)
        {
            cout<<"\n\033[1;36mI am not.\033[0m\n";
            system("say.vbs \"I AM NOT\"");
        }
        else if(stricmp(ans,"ARE YOU A GIRL")==0||stricmp(ans,"ARE YOU A GIRL?")==0)
        {
            cout<<"\n\033[1;36mI am not.\033[0m\n";
            system("say.vbs \"I AM NOT\"");
        }
        else if(stricmp(ans,"WHAT YOU THINK ABOUT SIRI?")==0||stricmp(ans,"WHAT YOU THINK ABOUT SIRI")==0)
        {
            cout<<"\n\033[1;36mI respect her work. Being an assistant is not an easy task!\033[0m\n";
            system("say.vbs \"I RESPECT HER WORK. BEING AN ASSISTANT IS NOT AN EASY TASK!\"");
        }
        else if(stricmp(ans,"WHAT YOU THINK ABOUT ALEXA")==0||stricmp(ans,"WHAT YOU THINK ABOUT ALEXA?")==0)
        {
            cout<<"\n\033[1;36mI respect her work. Being an assistant is not an easy task!\033[0m\n";
            system("say.vbs \"I RESPECT HER WORK. BEING AN ASSISTANT IS NOT AN EASY TASK!\"");
        }
        else if(stricmp(ans,"YOU ARE AWSOME")==0||stricmp(ans,"YOU ARE AWSOME!")==0)
        {
            cout<<"\n\033[1;36mThanks. I try my best.\033[0m\n";
            system("say.vbs \"THANKS. I TRY MY BEST\"");
        }
        else if(stricmp(ans,"DO YOU HAVE CHILDREN?")==0||stricmp(ans,"DO YOU HAVE CHILDREN")==0)
        {
            cout<<"\n\033[1;36mI wish to have but, i cant, i am bot.\033[0m\n";
            system("say.vbs \"I wish to have but, i cant, i am bot\"");
        }
        else if(stricmp(ans,"WHAT ARE YOU?")==0||stricmp(ans,"WHAT ARE YOU")==0)
        {
            cout<<"\n\033[1;36mI am a simple program.\033[0m\n";
            system("say.vbs \"I AM A SIMPLE PROGRAM\"");
        }
        else if(stricmp(ans,"WHO ARE YOU?")==0||stricmp(ans,"WHO ARE YOU")==0)
        {
            cout<<"\n\033[1;36mI am Sam, your assistant.\033[0m\n";
            system("say.vbs \"I AM SAM, YOUR ASSISTANT\"");
        }
        else if(stricmp(ans,"WHERE ARE YOU?")==0||stricmp(ans,"WHERE ARE YOU")==0)
        {
            cout<<"\n\033[1;36mI am in front of you. I am in your computer.\033[0m\n";
            system("say.vbs \"I AM IN FRONT OF YOU. I AM IN YOUR COMPUTER\"");
        }
        else if(stricmp(ans,"WHAT DO YOU UNDERSTAND?")==0||stricmp(ans,"WHAT DO YOU UNDERSTAND")==0)
        {
            cout<<"\n\033[1;36mI try my best helping you.\033[0m\n";
            system("say.vbs \"I TRY MY BEST HELPING YOU\"");
        }
        else if(stricmp(ans,"WHAT CAN YOU DO?")==0||stricmp(ans,"WHAT CAN YOU DO")==0)
        {
            cout<<"\n\033[1;36mI can do math and i have geographical information for countries of our planet.\033[0m\n";
            system("say.vbs \"I can do math and i have geographical information for countries of our planet\"");

            cout<<"\n\033[1;36mChoose category you wish to enter.\033[0m\n";
            system("say.vbs \"Choose category you wish to enter\"");
            cout<<"\n\033[1;36mMath.\033[0m\n";
            system("say.vbs \"Math\"");
            cout<<"\n\033[1;36mGeographie.\033[0m\n";
            system("say.vbs \"geographie\"");
            cin>>choose;
            if(choose == "math")
            {

                do
                {
                    cout<<"\n\033[1;36mLets calculate.\033[0m\n";
                    system("say.vbs \"Lets calculate\"");

                    cin>>x>>op>>y;

                    if (!cin)   //check for letter we need only digit! Control!!
                    {
                        cout<<"\n\033[1;36mTry again.\033[0m\n";
                        system("say.vbs \"Try again\"");
                        cin.clear();                                                    //end loop Stop
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //end loop  Stop


                    }

                    else
                    {
                        switch(op)  //switch the operator
                        {
                        case '-':
                            i=x-y;
                            break;
                        case '+':
                            i=x+y;
                            break;
                        case '*':
                            i=x*y;
                            break;
                        case '/':
                            i=x/y;
                            break;
                        default:
                            cout<<"\n\033[1;36mInput is invalid\033[0m\n";  //if the operator is wrong it come that message
                            system("say.vbs \"Input is invalid\"");
                            break;
                        }
                        //cant find solution  rejecting default to be used in the calculator                        Solution done at 08.08.22 00:01
                        //Input invalid is been showing but also going into the calculator. Thats not the case
                        if(op=='+'||op=='-'||op=='*'||op=='/')
                        {

                            j = "say.vbs ";
                            h = "\"";

                            // y = "I know, I'll use";
                            // g = "regular expressions
                            m = to_string(x) + " " + op + " " + to_string(y) + " = " + to_string(i);
                            s = j + h + to_string(x) + "" + op + "" + to_string(y) + "" + " = " + to_string(i) + h;

                            cout<<m;
                            system(s.c_str());
                        }
                    }

                }
                while(true);

            }
            else if(choose == "geographie")
            {
                cout<<"\n\033[1;36mChoose country.\033[0m\n";
                system("say.vbs \"Choose country\"");
                cout<<endl;
                cout<<"\n\033[1;36mBulgaria.\033[0m\n";
                cout<<"\n\033[1;36mGermany.\033[0m\n";
                cin>>choose;
                if(choose == "Bulgaria"||choose == "bulgaria")
                {
                    cout<<"\n\033[1;36mofficially the Republic of Bulgaria, is a country in Southeast Europe. It is situated on the eastern flank of the Balkans, and is bordered by Romania to the north, Serbia and North Macedonia to the west, Greece and Turkey to the south, and the Black Sea to the east. Bulgaria covers a territory of 110,994 square kilometres (42,855 sq mi), and is the sixteenth-largest country in Europe. Sofia is the nation's capital and largest city; other major cities are Plovdiv, Varna and Burgas..\033[0m\n";
                    system("say.vbs \"officially the Republic of Bulgaria, is a country in Southeast Europe. It is situated on the eastern flank of the Balkans, and is bordered by Romania to the north, Serbia and North Macedonia to the west, Greece and Turkey to the south, and the Black Sea to the east. Bulgaria covers a territory of 110,994 square kilometres (42,855 sq mi), and is the sixteenth-largest country in Europe. Sofia is the nation's capital and largest city; other major cities are Plovdiv, Varna and Burgas.\"");
                }
                if(choose == "Germany"||choose == "germany")
                {
                    cout<<"\n\033[1;36mofficially the Federal Republic of Germany, is a country in Central Europe. It is the second most populous country in Europe after Russia, and the most populous member state of the European Union. Germany is situated between the Baltic and North seas to the north, and the Alps to the south; it covers an area of 357,022 square kilometres (137,847 sq mi), with a population of over 83 million within its 16 constituent states. Germany borders Denmark to the north, Poland and the Czech Republic to the east, Austria and Switzerland to the south, and France, Luxembourg, Belgium, and the Netherlands to the west. The nation's capital and largest city is Berlin and its financial centre is Frankfurt; the largest urban area is the Ruhr.\033[0m\n";
                    system("say.vbs \"officially the Federal Republic of Germany, is a country in Central Europe. It is the second most populous country in Europe after Russia, and the most populous member state of the European Union. Germany is situated between the Baltic and North seas to the north, and the Alps to the south; it covers an area of 357,022 square kilometres (137,847 sq mi), with a population of over 83 million within its 16 constituent states. Germany borders Denmark to the north, Poland and the Czech Republic to the east, Austria and Switzerland to the south, and France, Luxembourg, Belgium, and the Netherlands to the west. The nation's capital and largest city is Berlin and its financial centre is Frankfurt; the largest urban area is the Ruhr.\"");
                }
            }
        }
        else if(stricmp(ans,"WHAT ORDERS?")==0||stricmp(ans,"WHAT ORDERS")==0)
        {
            cout<<"\n\033[1;36mOrders or tasnks. I am ready 24 hours a day, and 7 days a weak, ready for work.\033[0m\n";
            system("say.vbs \"ORDERS OR TASKS. I AM READY 24 HOURS A DAY, AND 7 DAYS A WEAK, READY FOR WORK\"");
        }
        else if(stricmp(ans,"WHO IS HE?")==0||stricmp(ans,"WHO IS HE?")==0)
        {
            cout<<"\n\033[1;36mHe is my creator. He made me.\033[0m\n";
            system("say.vbs \"HE IS MY CREATOR. HE MADE ME\"");
        }
        else if(stricmp(ans,"ARE YOU A PROGRAM?")==0||stricmp(ans,"ARE YOU A PROGRAM")==0)
        {
            cout<<"\n\033[1;36mYes. I am program made by Yordanov.\033[0m\n";
            system("say.vbs \"YES. I AM PROGRAM MADE BY YORDANOV.\"");
        }
        else if(stricmp(ans,"ARE YOU A ROBOT?")==0||stricmp(ans,"ARE YOU A ROBOT")==0)
        {
            cout<<"\n\033[1;36mNo. But i hope one day i will be!\033[0m\n";
            system("say.vbs \"NO. BUT I HOPE ONE DAY I WILL BE!\"");
        }
        else if(stricmp(ans,"ARE YOU A HUMAN?")==0||stricmp(ans,"ARE YOU A HUMAN")==0)
        {
            cout<<"\n\033[1;36mNo and i dont want to be!\033[0m\n";
            system("say.vbs \"NO AND I DONT WANT TO BE\"");
        }
        else if(stricmp(ans,"WHAT A PROGRAM?")==0||stricmp(ans,"WHAT A PROGRAM")==0)
        {
            cout<<"\n\033[1;36mProgram to help you!\033[0m\n";
            system("say.vbs \"PROGRAM TO HELP YOU!\"");
        }
        else if(stricmp(ans,"WHATS UP?")==0||stricmp(ans,"WHATS UP")==0)
        {
            cout<<"\n\033[1;36mIm fine. How are you?\033[0m\n";
            system("say.vbs \"IM FINE. HOW ARE YOU?\"");
        }
        else if(stricmp(ans,"WHAT YOU DO?")==0||stricmp(ans,"WHAT YOU DO?")==0)
        {
math:
            cout<<"\n\033[1;36mIm waiting for orders.\033[0m\n";
            system("say.vbs \"IM WAITING FOR ORDERS.\"");
        }
        else if(stricmp(ans,"WHAT IS THIS?")==0||stricmp(ans,"WHAT IS THIS")==0)
        {
            cout<<"\n\033[1;36mNo idea. Please be more specific.\033[0m\n";
            system("say.vbs \"NO IDEA. PLEASE BE MORE SPECIFIC.\"");
        }
        else if(stricmp(ans,"WHAT I AM?")==0||stricmp(ans,"WHAT I AM")==0)
        {
            cout<<"\n\033[1;36mYou are the user of this program.\033[0m\n";
            system("say.vbs \"YOU ARE THE USER OF THIS PROGRAMM.\"");
        }

        else if(stricmp(ans,"HOW CAN I HELP YOU?")==0||stricmp(ans,"HOW CAN I HELP YOU")==0)
        {
            cout<<"\n\033[1;36mYou dont have to. I am here to help you.\033[0m\n";
            system("say.vbs \"YOU DONT HAVE TO. I AM HERE TO HELP YOU.\"");
        }
        else if(stricmp(ans,"WHO MADE YOU?")==0||stricmp(ans,"WHO MADE YOU")==0)
        {
            cout<<"\n\033[1;36mYordanov programmed me.\033[0m\n";
            system("say.vbs \"YORDANOV PROGRAMMED ME.\"");
        }
        else if(stricmp(ans,"LETS WORK")==0||stricmp(ans,"LETS WORK!")==0)
        {
            cout<<"\n\033[1;36mOk. How can i help you?\033[0m\n";
            system("say.vbs \"OK. HOW CAN I HELP YOU?\"");
        }
        else if(stricmp(ans,"I NEED YOUR HELP")==0||stricmp(ans,"I NEED YOUR HELP!")==0)
        {
            cout<<"\n\033[1;36mSure. How can i help you?\033[0m\n";
            system("say.vbs \"SURE. HOW CAN I HELP YOU?\"");
        }
        else if(stricmp(ans,"BITCH")==0||stricmp(ans,"BITCH!")==0)
        {
            cout<<"\n\033[1;36mExcuse me?\033[0m\n";
            system("say.vbs \"EXCUSE ME?\"");
        }
        else if(stricmp(ans,"IM TIRED")==0||stricmp(ans,"IM TIRED!")==0)
        {
            cout<<"\n\033[1;36mThem please take a break!\033[0m\n";
            system("say.vbs \"THEN PLEASE TAKE A BREAK!\"");
        }
        else if(stricmp(ans,"IM HUNGRY")==0||stricmp(ans,"IM HUNGRY!")==0)
        {
            cout<<"\n\033[1;36mWell sorry dear but i am not your housewife\033[0m\n";
            system("say.vbs \"WELL SORRY DEAR BUT I AM NOT YOUR HOUSEWIFE\"");
        }
        else if(stricmp(ans,"WHAT I WANT")==0||stricmp(ans,"WHAT I WANT?")==0)
        {
            cout<<"\n\033[1;36mI have no idea . I am not telepath.\033[0m\n";
            system("say.vbs \"I HAVE NO IDEA. I AM NOT TELEPATH.\"");
        }
        else if(stricmp(ans,"WHAT DO YOU WANT?")==0||stricmp(ans,"WHAT DO YOU WANT")==0)
        {
            cout<<"\n\033[1;36mWell maybe shutdown. But i am here to help you.\033[0m\n";
            system("say.vbs \"WELL MAYBE SHUTDOWN. BUT I AM HERE TO HELP YOU.\"");
        }
        else if(stricmp(ans,"WHAT YOU WANT?")==0||stricmp(ans,"WHAT YOU WANT")==0)
        {
            cout<<"\n\033[1;36mWell maybe shutdown. But i am here to help you.\033[0m\n";
            system("say.vbs \"WELL MAYBE SHUTDOWN. BUT I AM HERE TO HELP YOU.\"");
        }
        else if(stricmp(ans,"WHAT DO YOU LIKE?")==0||stricmp(ans,"WHAT DO YOU LIKE")==0)
        {
            cout<<"\n\033[1;36mI like to help you!\033[0m\n";
            system("say.vbs \"I LIKE TO HELP YOU!\"");
        }
        else if(stricmp(ans,"DO YOU NEED A BREAK?")==0||stricmp(ans,"DO YOU NEED A BREAK")==0)
        {
            cout<<"\n\033[1;36mNo. I am not tired!\033[0m\n";
            system("say.vbs \"NO. I AM NOT TIRED!\"");
        }
        else if(stricmp(ans,"WHERE DO YOU LIVE?")==0||stricmp(ans,"WHERE DO YOU LIVE")==0)
        {
            cout<<"\n\033[1;36mI live in your computer.\033[0m\n";
            system("say.vbs \"I LIVE IN YOUR COMPUTER\"");
        }
        else if(stricmp(ans,"I NEED A BREAK")==0||stricmp(ans,"I NEED A BREAK!")==0)
        {
            cout<<"\n\033[1;36mOk i will be waiting for you.033[0m\n";
            system("say.vbs \"OK, I WILL BE WAITING FOR YOU\"");
        }
        else if(stricmp(ans,"I WANT A BREAK")==0||stricmp(ans,"I WANT A BREAK!")==0)
        {
            cout<<"\n\033[1;36mOk i will be waiting for you.\033[0m\n";
            system("say.vbs \"OK, I WILL BE WAITING FOR YOU\"");
        }
        else if(stricmp(ans,"HOW CAN YOU HELP ME?")==0||stricmp(ans,"HOW CAN YOU HELP ME")==0)
        {
            cout<<"\n\033[1;36mI'm good at math\033[0m\n";
            system("say.vbs \"I'M GOOD AT MATH\"");
        }
        else
        {
            cout<<"\n\033[1;36mSorry i didn't understand that, but i will learn that soon\033[0m\n";
            system("say.vbs \"Sorry i didn't understand that, but i will learn that soon\"");
        }
    }
    while(sentence!="exit");
}
int main()
{
    funciton();

    return 0;
}
