#include<iostream>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int castcount,crewcount;
int moviecount;
int actioncount;
int scificount;
int comedycount;
int dramacount;
int thrillercount;
int animatedcount;
int romancecount;

void poster(int a)
{
    if(a==0)
         {
             readimagefile("1.bmp",7,98,300,560);

         }
    else if(a==1)
    {
        readimagefile("2.bmp",7,98,300,560);

    }
    else if(a==2)
    {
        readimagefile("3.bmp",7,98,300,560);

    }
    else if(a==3)
    {
        readimagefile("4.bmp",7,98,300,560);

    }
    else if(a==4)
    {
        readimagefile("5.bmp",7,98,300,560);

    }
    else if(a==5)
    {
        readimagefile("6.bmp",7,98,300,560);

    }
    else if(a==6)
    {
        readimagefile("7.bmp",7,98,300,560);

    }
    else if(a==7)
    {
        readimagefile("8.bmp",7,98,300,560);

    }
    else if(a==8)
    {
        readimagefile("9.bmp",7,98,300,560);

    }
    else if(a==9)
    {
        readimagefile("10.bmp",7,98,300,560);

    }
    else if(a==10)
    {
        readimagefile("11.bmp",7,98,300,560);

    }
    else if(a==11)
    {
        readimagefile("12.bmp",7,98,300,560);

    }
    else if(a==12)
    {
        readimagefile("13.bmp",7,98,300,560);

    }
    else if(a==13)
    {
        readimagefile("14.bmp",7,98,300,560);

    }
    else if(a==14)
    {
        readimagefile("15.bmp",7,98,300,560);

    }
    else if(a==15)
    {
        readimagefile("16.bmp",7,98,300,560);

    }
    else if(a==16)
    {
        readimagefile("17.bmp",7,98,300,560);

    }
    else if(a==17)
    {
        readimagefile("18.bmp",7,98,300,560);

    }
    else if(a==18)
    {
        readimagefile("19.bmp",7,98,300,560);

    }
    else if(a==19)
    {
        readimagefile("20.bmp",7,98,300,560);

    }
    else if(a==20)
    {
        readimagefile("21.bmp",7,98,300,560);

    }
    else if(a==21)
    {
        readimagefile("22.bmp",7,98,300,560);

    }
    else if(a==22)
    {
        readimagefile("23.bmp",7,98,300,560);

    }
    else if(a==23)
    {
        readimagefile("24.bmp",7,98,300,560);

    }
    else if(a==24)
    {
        readimagefile("25.bmp",7,98,300,560);

    }
    else if(a==25)
    {
        readimagefile("26.bmp",7,98,300,560);

    }
    else if(a==26)
    {
        readimagefile("27.bmp",7,98,300,560);

    }
    else if(a==27)
    {
        readimagefile("28.bmp",7,98,300,560);

    }
    else if(a==28)
    {
        readimagefile("29.bmp",7,98,300,560);

    }
    else if(a==29)
    {
        readimagefile("30.bmp",7,98,300,560);

    }
    else if(a==30)
    {
        readimagefile("31.bmp",7,98,300,560);

    }
    else if(a==31)
    {
        readimagefile("32.bmp",7,98,300,560);

    }
    else if(a==32)
    {
        readimagefile("33.bmp",7,98,300,560);

    }
    else if(a==33)
    {
        readimagefile("34.bmp",7,98,300,560);

    }
    else if(a==34)
    {
        readimagefile("35.bmp",7,98,300,560);

    }
    else if(a==35)
    {
        readimagefile("36.bmp",7,98,300,560);

    }
    else if(a==36)
    {
        readimagefile("37.bmp",7,98,300,560);

    }
    else if(a==37)
    {
        readimagefile("38.bmp",7,98,300,560);

    }
    else if(a==38)
    {
        readimagefile("39.bmp",7,98,300,560);

    }
    else if(a==39)
    {
        readimagefile("40.bmp",7,98,300,560);

    }
    else if(a==40)
    {
        readimagefile("41.bmp",7,98,300,560);

    }
    else if(a==41)
    {
        readimagefile("42.bmp",7,98,300,560);

    }
    else if(a==42)
    {
        readimagefile("43.bmp",7,98,300,560);

    }
    else if(a==43)
    {
        readimagefile("44.bmp",7,98,300,560);

    }
    else if(a==44)
    {
        readimagefile("45.bmp",7,98,300,560);

    }
    else if(a==45)
    {
        readimagefile("46.bmp",7,98,300,560);

    }
    else if(a==46)
    {
        readimagefile("47.bmp",7,98,300,560);

    }
    else if(a==47)
    {
        readimagefile("48.bmp",7,98,300,560);

    }
    else
    {
        readimagefile("49.bmp",7,98,300,560);

    }


}

class Crew
{
        public:
	char director_name[30];
	char producer_name[30];
	char company_name[30];
	public:
	    char* getdirector_name()
	    {

	        return director_name;

	    }
	    char* getproducer_name()
	    {

	        return producer_name;

	    }
	    char* getcompany_name()
	    {

	        return company_name;

	    }



	    void setdirector_name(char a[])
	    {

	        strcpy(director_name,a);

	    }
	    void  setproducer_name(char a[])
	    {

	        strcpy(producer_name,a);

	    }
	    void setcompany_name(char a[])
	    {

            strcpy(producer_name,a);

	    }

	Crew(char dn[30],char  pn[30],char cn[30])
	{
	    strcpy(director_name,dn);
        strcpy(producer_name,pn);
		strcpy(company_name,cn);

	}

};

class Rating
{

	float votes;
	int person_voted;
	float rating;
	char country[30];
	public:
		float getrating()
		{
		    return rating;

		}
		float getvotes()
		{
		    return votes;

		}
		int getperson_voted()
		{
		    return person_voted;

		}
		char* getcountry()
		{
		    return country;
        }


        void setrating(float x)
		{
		    rating=x;

		}
		void setvotes(float x)
		{
		     votes=x;

		}
		void setperson_voted(int x)
		{
		     person_voted=x;

		}
		void  setcountry(char a[])
		{
		     strcpy(country,a);

		}

		Rating()
		{
		}
	Rating(float vo, int pe, float ra,char co[30]){
		votes=vo;
		person_voted=pe;
		rating = ra;
		strcpy(country,co);

	}
};

class Boxoffice
{
	int budget;
	int opening_weekend;
	int gross;
	int weekend_gross;
	int country_gross;
public:
    int getbudget()
		{
		    return budget;

		}

    int getopening_weekend()
		{
		    return opening_weekend;

		}

		int getcountry_gross()
		{
		    return country_gross;

		}

    int getgross()
		{
		    return gross;

		}
int getweekend_gross()
		{
		    return weekend_gross;

		}



	void  setbudget(int x)
		{
		     budget=x;

		}

    void setopening_weekend(int x)
		{
		    opening_weekend=x;

		}

		void setcountry_gross(int x)
		{
		    country_gross=x;

		}

    void  setgross(int x)
		{
		    gross=x;

		}
        void setweekend_gross(int x)
		{
		    weekend_gross=x;

		}

	Boxoffice()
	{
	}
Boxoffice(int bu, int ow, int g, int wg, int cg){

	budget=bu;
	opening_weekend=ow;
	gross=g;
	weekend_gross=wg;
	country_gross=cg;
}
};

class Runtime
{
	int hours;
	int minutes;
	int total_time;
	public:
	    int gethours()
		{
		    return hours;

		}
		int getminutes()
		{
		    return minutes;

		}
		int gettotal_time()
		{
		    return total_time;

		}

		void sethours(int x)
		{
		    hours=x;
		}

        void setminutes(int x)
		{
		    minutes=x;
		}
		void settotal_time(int x)
		{
		    total_time=x;
		}

		Runtime()
		{
		}
	Runtime(int h, int m, int tt){

		hours=h;
		minutes=m;
		total_time=tt;
	}
};

class Cast
{
	char actor_name[30];
	char actress_name[30];
	int actor_movie_count;
	int actress_movie_count;

	public:
	    char* getactor_name()
		{
		    return actor_name;

		}

            char* getactress_name()
            {
                return actress_name;

            }

            int getactor_movie_count()
            {
		    return actor_movie_count;
            }

            int getactress_movie_count()
		{
		    return actress_movie_count;

		}
/////////////////////

            void setactor_name(char x[])
            {
		    strcpy(actor_name,x);

            }

            void setactress_name(char x[])
            {
                strcpy(actress_name,x);
            }

            void  setactor_movie_count(int x)
            {
		    actor_movie_count=x;
            }

            void setactress_movie_count(int x)
            {
		    actress_movie_count=x;

            }

	Cast(char acn[30],char actn[30], int acmc , int actmc ){
		strcpy(actor_name,acn);
		strcpy(actress_name,actn);
		actor_movie_count=acmc;
		actress_movie_count=actmc;
	}
};

class Movie{
	char date_of_release[30];
	char movie_name[30];
	Crew *cr;
	Rating ra;
	Boxoffice b;
    Runtime ru;
	Cast *ca;

	public:
        friend void edit( Movie *ma[],int index);
	    friend void sortbydate(Movie *m[]);
	    friend void ratingsort(Movie * m[]);
	    friend void budgetsort(Movie * m[]);
	    friend void grosssort(Movie * m[]);

////////////////set///////////


	    void setdate_of_release(char array[])
		{
		    strcpy(date_of_release,array);

		}
        void setmovie_name(char a[])
        {
            strcpy(movie_name,a);

        }

///////////////////////////////
Rating getra()
{
    return ra;

}

Boxoffice getb()
{
    return b;

}

Runtime getru()
{
    return ru;

}
////////virtual function for polymorphism in Movie class///////////////
virtual char* getgenre()
    {
    }
///////////////////////

	    char* getdate_of_release()
		{
		    return date_of_release;

		}
        char* getmovie_name()
                {
                    return movie_name;

                }


		Movie()
		{
		}
	Movie(
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre
	)
	:ra(vo, person_voted, rating, country),
	b(bu, ow,g,wg, cg),
	ru(h,m,tt)
	{
		ca=cas;
				cr=cre;

				strcpy(date_of_release,dr);
				strcpy(movie_name,mn);


	}
	virtual void display(int a)
	{   char d[100];

            char f;
	    readimagefile("background.bmp",0,0,1000,600);
	    poster(a);


          readimagefile("imdbstar.bmp",315,130,395,200);

	    settextstyle(9,HORIZ_DIR,4);
	    sprintf(d,"%s",getmovie_name());
        outtextxy(310,100,d);
         settextstyle(10,HORIZ_DIR,2);

        setbkcolor(14);setcolor(0);
        sprintf(d,"%.1f",ra.getrating());
        outtextxy(335,160,d);
        setbkcolor(0);setcolor(15);
        sprintf(d,"Date of release-%s",getdate_of_release());
        outtextxy(310,240,d);
        sprintf(d,"Country of release-%s",ra.getcountry());
        outtextxy(310,270,d);
        sprintf(d,"Runtime-%d Hours %d minutes",ru.gethours(),ru.getminutes());
        outtextxy(310,300,d);
        sprintf(d,"Director name-%s",cr->getdirector_name());
        outtextxy(310,330,d);
        sprintf(d,"Producer name-%s",cr->getproducer_name());
        outtextxy(310,360,d);
        sprintf(d,"Actor-%s",ca->getactor_name());
        outtextxy(310,390,d);
        sprintf(d,"Actress-%s",ca->getactress_name());
        outtextxy(310,420,d);


     sprintf(d,"Budget-%d million $",b.getbudget());
        outtextxy(310,450,d);
     sprintf(d,"Earning in openning weekend-%d million $",b.getweekend_gross());
        outtextxy(310,480,d);
        sprintf(d,"Earning in country of release-%d million $",b.getcountry_gross());
        outtextxy(310,510,d);
sprintf(d,"Total Earnings-%d million $",b.getgross());
        outtextxy(310,540,d);
        f=getch();
	}

};
class action:public Movie{
    char genre[30];

public:
    action(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    /////////in action class//////////////
char* getgenre()
    {
        return genre;
    }
    /////////////////////
 };
class scifi :public Movie{
char genre[30];

public:
    scifi(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    /////////in scfi class//////////////
    char* getgenre()
    {
        return genre;
    }
    ////////////
};
class comedy:public Movie{
char genre[30];

public:comedy(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    char* getgenre()
    {

        return genre;
    }
};
class drama:public Movie{
char genre[30];

public:
    drama(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }

    char* getgenre()
    {

        return genre;
    }
};
class thriller:public Movie{
char genre[30];

public:
    thriller(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    char* getgenre()
    {

        return genre;
    }
};
class animated:public Movie{
char genre[30];

public:
    animated(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    char* getgenre()
    {

        return genre;
    }
};
class romance:public Movie{
char genre[30];

public:
    romance(char ge[],
	char dr[30],char mn[30],
	float vo, int person_voted, float rating , char country[30],
	int bu, int ow, int g, int wg, int cg,
	int h, int m, int tt,
	Cast *&cas,Crew *&cre):Movie(
	 dr, mn,
	 vo,  person_voted,  rating ,  country,
	 bu,  ow,  g,  wg,  cg,
	 h, m,  tt,
	 cas, cre)
    {
        strcpy(genre,ge);

    }
    char* getgenre()
    {

        return genre;
    }
};


Movie *ma[100];
Cast *c[100];
Crew *cr[100];


int crewobjct(char dn[30],char prn[30],char cmpn[30])
{ int i;
    if(crewcount==-1)
    {
        cr[0] = new Crew(dn,prn,cmpn);
        crewcount++;
        return(0);
    }

    for(i=0;i<=crewcount;i++)
     {  if(cr[i]->company_name==cmpn&&cr[i]->getdirector_name()==dn&&cr[i]->getproducer_name()==prn)
          {
              return(i);
          }

     }crewcount++;
     cr[crewcount] = new Crew(dn,prn,cmpn);

        return(crewcount);

}

int castobjct(char actor_name[30],char actress_name[30],int actor_movie_count,int actress_movie_count)
{ int i;
    if(castcount==-1)
    {
        c[0] = new Cast(actor_name, actress_name,actor_movie_count, actress_movie_count);
        castcount++;
        return(0);
    }

    for(i=0;i<=castcount;i++)
     {  if(c[i]->getactor_name()==actor_name&&c[i]->getactress_name()==actress_name
           &&c[i]->getactor_movie_count()==actor_movie_count&&c[i]->getactress_movie_count()==actress_movie_count)
          {
              return(i);
          }

     }castcount++;
     c[castcount] = new Cast(actor_name, actress_name,actor_movie_count, actress_movie_count);

        return(castcount);

}

void initialize()
{
int i;
int x,y;
castcount=-1;
crewcount=-1;
moviecount=-1;
char date_of_release[30];
	char movie_name[30];
	char genre[30];

	char director_name[30];
	char producer_name[30];
	char company_name[30];
	int budget;
	int opening_weekend;
	int gross;
	int weekend_gross;
	int country_gross;
	int hours;
	int minutes;
	int total_time;

	char actor_name[30];
	char actress_name[30];
    int actor_movie_count;
	int actress_movie_count;
	float votes;
	int person_voted;
	float rating;
	char country[30];

	FILE *fp;

    fp=fopen("pro1.txt","r+");

while(1)
{
    if( feof(fp) )
      {
         break ;
      }
    moviecount++;
    i=moviecount;

fscanf(fp,"%s %s %s %s %s %s %s %d %f %f %d %d %d %d %d %d %d %d %s %s %d %d\n",movie_name,genre,date_of_release,
       director_name,producer_name,company_name,country,&person_voted,&votes,&rating,&weekend_gross,&opening_weekend,
       &gross,&country_gross,&budget,&hours,&minutes,&total_time,actor_name,actress_name,&actress_movie_count,&actor_movie_count);
	x=crewobjct(director_name,producer_name,company_name);

y= castobjct(actor_name, actress_name,actor_movie_count, actress_movie_count);


	 if(strcmp("comedy",genre)==0)
     {
         comedy *co;
         co=new comedy(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=co;
     }
     else if(strcmp("action",genre)==0)
     {
         action *ac;
         ac=new action(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=ac;
     }
     else if(strcmp("thriller",genre)==0)
     {
         thriller *th;
                  th=new thriller(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=th;
     }
     else if(strcmp("scifi",genre)==0)
     {
         scifi *sc;
         sc=new scifi(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=sc;
     }
     else if(strcmp("drama",genre)==0)
     {
         drama *dr;
         dr=new drama(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=dr;
     }
     else if(strcmp("romance",genre)==0)
     {
         romance *ro;
                  ro=new romance(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=ro;
     }
     else if(strcmp("animated",genre)==0)
     {
         animated *an;
                  an=new animated(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=an;
     }

}
fclose(fp);
}

void new_object()
{

    char date_of_release[30];
	char movie_name[30];
	char genre[30];
    char director_name[30];
	char producer_name[30];
	char company_name[30];
	int budget;
	int opening_weekend;
	int gross;
	int weekend_gross;
	int country_gross;
	int hours;
	int minutes;
	int total_time;

	char actor_name[30];
	char actress_name[30];
		int actor_movie_count;
	int actress_movie_count;
	float votes;
	int person_voted;
	float rating;
	char country[30];
	closegraph();
           cout<<"USE '_' for space"<<endl;
       cout<<"enter movie name";
	cin>>movie_name;
///////////////////////////////////////****************exception handliing is used here...*********/////////////////////////////////
    int flag=0;
    while(flag!=1){
        cout<<"enter date of release(mm/dd/yyyy)";
           cin>>date_of_release;

            try{
                  if(date_of_release[10]>=32 && date_of_release[10]<=127)
            {
                throw "enter correct date format!";
            }

             if(date_of_release[2]!='/' ||  date_of_release[5]!='/'
                || date_of_release[0]<'/' || date_of_release[1]<'/'
                || date_of_release[2]<'/'|| date_of_release[3]<'/'
                || date_of_release[7]<'/'|| date_of_release[6]<'/'
                || date_of_release[5]<'/'|| date_of_release[4]<'/'
                || date_of_release[8]<'/'|| date_of_release[9]<'/')
            {
                throw "enter correct date format!";
            }
            if(
                date_of_release[0]>'9' || date_of_release[1]>'9'
                || date_of_release[2]>'9'|| date_of_release[3]>'9'
                || date_of_release[7]>'9'|| date_of_release[6]>'9'
                || date_of_release[5]>'9'|| date_of_release[4]>'9'
                || date_of_release[8]>'9'|| date_of_release[9]>'9')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]=='0' && date_of_release[1]=='0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]>'1')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]=='1' && date_of_release[1]>'2')
            {
                throw "enter correct date format!";
            }



            if(date_of_release[3]=='0' &&  date_of_release[4]=='0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]=='0' &&  date_of_release[4]>'0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]>'3' )
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]=='3' &&  date_of_release[3]>'1')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[6]=='0' &&  date_of_release[7]=='0' && date_of_release[8]=='0' &&  date_of_release[9]=='0')
            {
                throw "enter correct date format!";
            }


            flag=1;
        }


             catch (const char* msg)
        {
         cerr << msg << endl;
        }
    }

///////////////////////////////////////****************...*********/////////////////////////////////

	cout<<"enter genre ";
	cin>>genre;
///crew
	cout<<"enter director name ";
	cin>>director_name;
	cout<<"enter producer_name ";
	cin>>producer_name;
	cout<<"enter company_name ";
	cin>>company_name;
	//cast
		cout<<"enter actor_name ";
	cin>>actor_name;
		cout<<"enter actress_name ";
	cin>>actress_name;
		cout<<"enter actor_movie_count ";
	cin>>actor_movie_count;
cout<<"enter actress_movie_count ";
	cin>>actress_movie_count;
		//rating

		cout<<"enter person_voted ";
	cin>>person_voted;
		cout<<"enter rating ";
	cin>>rating;
	votes=rating*person_voted;
	cout<<"enter country";
	cin>>country;
	//boxofficce
		cout<<"enter budget ";
	cin>>budget;
		cout<<"enter opening_weekend ";
	cin>>opening_weekend;
		cout<<"enter gross ";
	cin>>gross;
		cout<<"enter weekend_gross ";
	cin>>weekend_gross;
		cout<<"enter country_gross ";
	cin>>country_gross;
	//runtime
		cout<<"enter hours ";
	cin>>hours;
		cout<<"enter minutes ";
	cin>>minutes;
		total_time=hours*60+minutes;

FILE *fp;
int x,y,i;
moviecount++;
i=moviecount;

    fp=fopen("pro1.txt","a+");
    fseek(fp,0,SEEK_END);

fprintf(fp,"\n%s %s %s %s %s %s %s %d %f %f %d %d %d %d %d %d %d %d %s %s %d %d\n",movie_name,genre,date_of_release,director_name,producer_name,company_name,country,person_voted,votes,rating,weekend_gross,opening_weekend,gross,country_gross,budget,hours,minutes,total_time,actor_name,actress_name,actress_movie_count,actor_movie_count);
x=crewobjct(director_name,producer_name,company_name);
y= castobjct(actor_name, actress_name,actor_movie_count, actress_movie_count);

  /*  ma[i]=new Movie(date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);*/

	 if(strcmp("comedy",genre)==0)
     {
         comedy *co;
         co=new comedy(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=co;
     }
     else if(strcmp("action",genre)==0)
     {
         action *ac;
         ac=new action(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=ac;
     }
     else if(strcmp("thriller",genre)==0)
     {
         thriller *th;
                  th=new thriller(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=th;
     }
     else if(strcmp("scifi",genre)==0)
     {
         scifi *sc;
         sc=new scifi(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=sc;
     }
     else if(strcmp("drama",genre)==0)
     {
         drama *dr;
         dr=new drama(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=dr;
     }
     else if(strcmp("romance",genre)==0)
     {
         romance *ro;
                  ro=new romance(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=ro;
     }
     else if(strcmp("animated",genre)==0)
     {
         animated *an;
                  an=new animated(genre,date_of_release, movie_name,votes ,person_voted,rating, country ,
	budget, opening_weekend, gross, weekend_gross,country_gross,
	hours,minutes, total_time,
	 c[y],cr[x]);
	 ma[i]=an;
     }


fclose(fp);
initwindow(1000,600);
}



int search(char src[], char str[]) {
   int i, j, firstOcc;
   i = 0, j = 0;

   while (src[i] != '\0') {

      while (src[i] != str[0] && src[i] != '\0')
         i++;

      if (src[i] == '\0')
         return (-1);

      firstOcc = i;

      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') {
         i++;
         j++;
      }

      if (str[j] == '\0')
         return (firstOcc);
      if (src[i] == '\0')
         return (-1);

      i = firstOcc + 1;
      j = 0;
   }
}

void search1()
{ char f[20],g[20];
int d,i,e,count=0,index[48];
char a;
char b;

char h[100];

	    settextstyle(9,HORIZ_DIR,2);


 readimagefile("background.bmp",0,0,1000,600);
//sprintf(,"%s",movie_name);
outtextxy(10,98,"Enter the movie name you want to search:-");
a=getch();

f[0]=a;
f[1]='\0';

outtextxy(530,98,f);

i=1;
while(1)
{
    a=getch();

    if(a==13) break;

    f[i]=a;

    i++;
    f[i]='\0';

     outtextxy(530,98,f);
}

d=strlen(f);

for(i=0;i<=d;i++)
{

     if(f[i]>=65&&f[i]<=90)
    {
        f[i]+=32;
    }
}
for(i=0;i<=d;i++)
{
    if(f[i]=='_')
    {
        if(f[i+1]>=97&&f[i+1]<=122)
        {
            f[i+1]-=32;
        }
    }
}

strcpy(g,f);
if(g[0]>=97&&g[0]<=122)
{
    g[0]-=32;
}

settextstyle(1,HORIZ_DIR,1);

for(i=0;i<=moviecount;i++)

{
       d=search( ma[i]->getmovie_name(),f);
       e=search( ma[i]->getmovie_name(),g);
       if(d!=-1||e!=-1)
       {  index[count]=i;
            count++;

          // ma[i]->display(i);
       }
}
d=0;e=0;
for(i=0;i<count;i++)
{   if(i<20)
{sprintf(h,"%d.%s",i+1,ma[index[i]]->getmovie_name());
outtextxy(10,140+i*20,h);}
else if(i<40)
{
    sprintf(h,"%d.%s",i+1,ma[index[i]]->getmovie_name());
outtextxy(500,140+d*20,h); d++;
}
else
{
    sprintf(h,"%d.%s",i+1,ma[index[i]]->getmovie_name());
outtextxy(720,120+e*20,h); e++;
}
}
settextstyle(1,HORIZ_DIR,3);
outtextxy(10,550,"Enter the serial number to view the entire movie details:-");

a=getch();
sprintf(h,"%d",a-48);
outtextxy(950,550,h);

b=getch();
i=(a-48);
d=(a-48)*10+(b-49);
cout<<i<<"  "<<count;
if( b==13 && i>=0 && i<=9 && i<=count )
{
ma[index[a-1-48]]->display(index[a-1-48]);
}
else if(d<count && b!=13)
    {

    ma[index[d]]->display(index[d]);}




}


//////////////////////////template use is here/////////////////////////
template<typename t1, typename t2>
void sortt(t1 (array[]),t2 (ratesort[]))
{
    t1 swap1;
    t2 swap2;

int c,d;

    for (c = 0 ; c <= ( moviecount  ); c++)
  {
    for (d = 0 ; d <= moviecount - c -1 ; d++)
    {
      if (array[d] < array[d+1])
      {
        swap1       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap1;

        swap2       = ratesort[d];
        ratesort[d]   = ratesort[d+1];
        ratesort[d+1] = swap2;


      }
    }
  }
}

/////template finish/////////////////////
void sortbydate( Movie * m[])
{
    char date[30];
    int swap,i;
    int datesort[100];
    int array[100]={0};
    for(i=0;i<=moviecount;i++)
    {
        datesort[i]=i;

    }
    for(i=0;i<=moviecount;i++)
    {
        strcpy(date,m[i]->date_of_release);
                 array[i]=( 10*(int(date[3])-48) + (int(date[4])-48) +
                  30*10*(int(date[0])-48) + 30*(int(date[1])-48-1)+
                  365*1000*(int(date[6])-48) + 365*100*(int(date[7])-48)+
                  365*10*(int(date[8])-48) +
                  365*1*(int(date[9])-48));

    }
   int d; sortt(array,datesort);


  readimagefile("background.bmp",0,0,1000,600);

  settextstyle(4,HORIZ_DIR,3);
outtextxy(10,98,"Enter 1 to view  10 latest movies");
outtextxy(10,140,"Enter 2 to view  10 old movies");
outtextxy(10,180,"Enter 3 to view in custom year");
char a,b,e[100];
a=getch();
if(a=='1')
{  settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %s",i+1,m[datesort[i] ]->movie_name, m[datesort[i] ]->date_of_release);
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
    if(i==0)
    {settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

    else if( b==13 && i>=0 && i<=9)
    {
    m[datesort[a-1-48]]->display(datesort[a-1-48]);
    }
    else if(d<10)
    {m[datesort[d]]->display(datesort[d]);}
     else
    {settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}

else if(a=='2')
{
    settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %s",i+1,m[datesort[moviecount-i] ]->movie_name, m[datesort[moviecount-i] ]->date_of_release);
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
    if(i==0)
    {settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }
    else if( b==13 && i>=0 && i<=9)
    {
    m[datesort[moviecount-(a-1-48)]]->display(datesort[moviecount-(a-1-48)]);
    }
    else if(d<10)
    {m[datesort[moviecount-d]]->display(datesort[moviecount-d]);}
    else
    {settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }
}
else if(a=='3')
        {
               settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
             char g,n;
int bk;

        outtextxy(10,98,"Enter the year:-");
        a=getch();
         sprintf(e,"%d",a-48);
        outtextxy(230,98,e);
        b=getch();
        sprintf(e,"%d",b-48);
        outtextxy(250,98,e);
        g=getch();
        sprintf(e,"%d",g-48);
        outtextxy(270,98,e);
         n=getch();
         sprintf(e,"%d",n-48);
        outtextxy(290,98,e);

        d=(a-48)*1000+(b-48)*100+(g-48)*10+(n-48);
        d*=365;
        bk=d+(12*30);
int count=0;
int cou[100]={0};

        for (i=0;i<=moviecount;i++)
         { if( (d)<=array[i] && (bk)>=array[i])
             {
                 sprintf(e,"%d.%s:-   %s",count+1,m[datesort[i] ]->movie_name, m[datesort[i] ]->date_of_release);
                 outtextxy(10,140+count*40,e);
                cou[count]=datesort[i];
                 count++;
             }
         }
                if(count!=0)
                {settextstyle(1,HORIZ_DIR,3);
                outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
                a=getch();
                if(a=='0' )
                {settextstyle(1,HORIZ_DIR,3);
                outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
                a=getch();
                }
                else if(a-48<=count&&a!='0')
                {
                  m[ cou[a-48-1] ]->display(cou[a-48-1]);
                }
                else
                {
                settextstyle(1,HORIZ_DIR,3);
                outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
                a=getch();
                }

                }
                else
                {   outtextxy(10,480,"NO MOVIES FOUND");
                    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
                    a=getch();
                }

          }
          else
    {
    outtextxy(10,480,"WRONG OPTION");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
    }

}



void ratingsort(Movie * m[])
{float array[100];
int ratesort[100];
char e[100];
    int i;
    for(i=0;i<=moviecount;i++)
    {
        ratesort[i]=i;
    }
    for(i=0;i<=moviecount;i++)
    {
        array[i]=m[i]->ra.getrating();
    }
   int c,d;

 sortt(array,ratesort);

   readimagefile("background.bmp",0,0,1000,600);

  settextstyle(4,HORIZ_DIR,3);
outtextxy(10,98,"Enter 1 to view top 10 highly rated movies");
outtextxy(10,140,"Enter 2 to view top 10 least rated movies");
outtextxy(10,180,"Enter 3 to view in custom range");
char a,b;
a=getch();
if(a=='1')
{  settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %.1f",i+1,m[ratesort[i] ]->movie_name, m[ratesort[i] ]->ra.getrating());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);

    if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }
    else if( b==13 && i>=0 && i<=9)
    {
    m[ratesort[a-1-48]]->display(ratesort[a-1-48]);
    }
    else if(d<10)
    {m[ratesort[d]]->display(ratesort[d]);}
    else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }


}

else if(a=='2')
{
    settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %.1f",i+1,m[ratesort[moviecount-i] ]->movie_name, m[ratesort[moviecount-i] ]->ra.getrating());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
    if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }

    else if( b==13 && i>=0 && i<=9)
    {
    m[ratesort[moviecount-(a-1-48)]]->display(ratesort[moviecount-(a-1-48)]);
    }
    else if(d<10)
    {m[ratesort[moviecount-d]]->display(ratesort[moviecount-d]);}
    else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}

else if(a=='3')
   {   closegraph();
          initwindow(1400,600);

       settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1400,600);

 float lo,hi,temp;
        outtextxy(10,120,"Enter the range :-");
        a=getch();
lo=(float)(a-48);
sprintf(e,"%.0f -",lo);
                  outtextxy(260,120,e);



        if(a=='1')
        {       b=getch();
               if(b!=13)
              lo=10;
        }
                sprintf(e,"%.0f -",lo);
                  outtextxy(260,120,e);

        char gh;
        b=getch();
          hi=(float)(b-48);
          sprintf(e,"%.0f",hi);
                  outtextxy(310,120,e);
        //sprintf(e,"%d",b-48);
        //outtextxy(280,120,e);
        gh=getch();
        if(gh!=13)
        {

            hi=10;


        }
                sprintf(e,"%.0f",hi);
                  outtextxy(310,120,e);



        int count=0;
        int cou[100];
        if(lo>hi)
        {temp=hi;
          hi=lo;
          lo=temp;
        }
        if(lo>=0 && lo<=10 && hi>=0 && hi<=10)
        {
            for(i=0;i<=moviecount;i++)
            {
                if(array[i]>=lo && array[i]<=hi)
                { // sprintf(e,"%d.%s:- %.1f",count+1,m[ratesort[i] ]->movie_name, m[ratesort[i] ]->ra.getrating());
                //outtextxy(10,140+count*40,e);

                    cou[count]=ratesort[i];
                  count++; }
                    }
            }
            int d=0;int h=0;

             if(count!=0)

{   for(i=0;i<count;i++)
    {   if(i<20)
    {sprintf(e,"%d.%s:- %.1f",i+1,m[cou[i] ]->movie_name, m[cou[i] ]->ra.getrating());
    outtextxy(10,140+i*20,e);}
    else if(i<40)
    {
    sprintf(e,"%d.%s:- %.1f",i+1,m[cou[i] ]->movie_name, m[cou[i] ]->ra.getrating());
    outtextxy(520,140+d*20,e); d++;
    }
    else
    {
    sprintf(e,"%d.%s:- %.1f",i+1,m[cou[i] ]->movie_name, m[cou[i] ]->ra.getrating());
    outtextxy(1030,140+h*20,e); h++;
    }

    }

settextstyle(1,HORIZ_DIR,3);
outtextxy(10,550,"Enter the serial number to view the entire movie details:-");

a=getch();
sprintf(e,"%d",a-48);
outtextxy(950,550,e);

b=getch();
closegraph();
          initwindow(1000,600);

    i=(a-48);
    d=(a-48)*10+(b-49);

     if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }
    else if( b==13 && i>=0 && i<=9 && i<=count )
    {
    m[cou[a-1-48]]->display(cou[a-1-48]);
    }
    else if(d<count && b!=13)
    {

    m[cou[d]]->display(cou[d]);}
    else
    {settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();

    }
    }
else{outtextxy(10,480,"NO MOVIES FOUND");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
}

}

else
{
  outtextxy(10,480,"WRONG OPTION");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
}




}


void budgetsort(Movie * m[])
{
        int bsort[100];
     int array[100];
    int swap,i;
    for(i=0;i<=moviecount;i++)
    {
        bsort[i]=i;
    }
    for(i=0;i<=moviecount;i++)
    {
        array[i]=m[i]->b.getbudget();
    }
   int c,d;
 sortt(array,bsort);


readimagefile("background.bmp",0,0,1000,600);

  settextstyle(4,HORIZ_DIR,3);
outtextxy(10,98,"Enter 1 to view top 10 movies with highest budget");
outtextxy(10,140,"Enter 2 to view top 10 movies with least budget");
char e[100];
char a,b;
a=getch();
if(a=='1')
{  settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %d million $",i+1,m[bsort[i] ]->movie_name, m[bsort[i] ]->b.getbudget());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
     if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }

    else if( b==13 && i>=0 && i<=9)
    {
    m[bsort[a-1-48]]->display(bsort[a-1-48]);
    }
    else if(d<10)
    {m[bsort[d]]->display(bsort[d]);}
    else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}

else if(a=='2')
{
    settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %d million $",i+1,m[bsort[moviecount-i] ]->movie_name, m[bsort[moviecount-i] ]->b.getbudget());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
    if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }

    else if( b==13 && i>=0 && i<=9)
    {
    m[bsort[moviecount-(a-1-48)]]->display(bsort[moviecount-(a-1-48)]);
    }
    else if(d<10)
    {m[bsort[moviecount-d]]->display(bsort[moviecount-d]);}
    else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}

else
{
  outtextxy(50,480,"WRONG OPTION");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
}


   }


void grosssort(Movie * m[])
{
  int gsort[100];
int  array[100];
  int swap,i;
    for(i=0;i<=moviecount;i++)
    {
        gsort[i]=i;
    }
    for(i=0;i<=moviecount;i++)
    {
        array[i]=m[i]->b.getgross();
    }
   int c,d;
 sortt(array,gsort);

readimagefile("background.bmp",0,0,1000,600);

  settextstyle(4,HORIZ_DIR,3);
outtextxy(10,98,"Enter 1 to view top 10 movies with highest gross");
outtextxy(10,140,"Enter 2 to view top 10 movies with least gross");
char e[100];
char a,b;
a=getch();
if(a=='1')
{  settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %d million $",i+1,m[gsort[i] ]->movie_name, m[gsort[i] ]->b.getgross());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
    if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }
    else if( b==13 && i>=0 && i<=9)
    {
    m[gsort[a-1-48]]->display(gsort[a-1-48]);
    }
    else if(d<10)
    {m[gsort[d]]->display(gsort[d]);}
     else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}

else if(a=='2')
{
    settextstyle(1,HORIZ_DIR,2);
    readimagefile("background.bmp",0,0,1000,600);
    for(i=0;i<10;i++)
    {
    sprintf(e,"%d.%s:-   %d million $",i+1,m[gsort[moviecount-i] ]->movie_name, m[gsort[moviecount-i] ]->b.getgross());
    outtextxy(10,140+i*40,e);}

    settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Enter the serial number to view the entire movie details:-");
    a=getch();
    sprintf(e,"%d",a-48);
    outtextxy(950,550,e);
    b=getch();
    i=(a-48);
    d=(a-48)*10+(b-49);
           if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }

    else if( b==13 && i>=0 && i<=9)
    {
    m[gsort[moviecount-(a-1-48)]]->display(gsort[moviecount-(a-1-48)]);
    }
    else if(d<10)
    {m[gsort[moviecount-d]]->display(gsort[moviecount-d]);}
    else
    {
            settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");
    a=getch();
    }

}
else
{
  outtextxy(10,480,"WRONG OPTION");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
}

   }


void displaygenre()
{ again:
int n;
int i;
char s[15];
int arr[100]={0};
  readimagefile("background.bmp",0,0,1000,600);

  settextstyle(4,HORIZ_DIR,3);
outtextxy(10,98,"Enter 1 for action");
outtextxy(10,140,"Enter 2 for scifi");
outtextxy(10,180,"Enter 3 comedy");
outtextxy(10,220,"Enter 4 drama");
outtextxy(10,260,"Enter 5 thriller");
outtextxy(10,300,"Enter 6 animated");
outtextxy(10,340,"Enter 7 romance");

char a,b,e[100];
a=getch();
n=a-48;
readimagefile("background.bmp",0,0,1000,600);

    if(n==1)
     {
         strcpy(s,"action");
     }
    else if(n==2)
     {
         strcpy(s,"scifi");
     }
    else if(n==3)
    {
         strcpy(s,"comedy");
     }
    else if(n==4)
    {
         strcpy(s,"drama");
     }
    else if(n==5)
    {
         strcpy(s,"thriller");
     }
    else if(n==6)
    {
         strcpy(s,"animated");
     }
    else if(n==7)
    {
         strcpy(s,"romance");
     }
    else
        { settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,350,"Wrong  Serial  Number Press Any Key To Try again");
    a=getch();
    goto again;
        }

settextstyle(4,HORIZ_DIR,1);

       int count=0;
       for(i=0;i<=moviecount;i++)
       {
           if(strcmp(s,ma[i]->getgenre() )==0)
           {                       arr[count]=i;
                    count++;
           }
       }


           int d=0;

if(count!=0)

{
    for(i=0;i<count;i++)
    {   if(i<20)
      {
          sprintf(e,"%d.%s",i+1,ma[arr[i]]->getmovie_name());
    outtextxy(10,140+i*20,e);}
    else if(i<40)
    {
sprintf(e,"%d.%s",i+1,ma[arr[i] ]->getmovie_name());
    outtextxy(520,140+d*20,e); d++;
    }


    }

settextstyle(1,HORIZ_DIR,3);
outtextxy(10,550,"Enter the serial number to view the entire movie details:-");

a=getch();
sprintf(e,"%d",a-48);
outtextxy(950,550,e);

b=getch();


    i=(a-48);
    d=(a-48)*10+(b-49);

     if(i==0 )
    {
        settextstyle(1,HORIZ_DIR,3);
 outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();
    }
    else if( b==13 && i>=0 && i<=9 && i<=count )
    {
    ma[arr[a-1-48]]->display(arr[a-1-48]);
    }
    else if(d<count && b!=13)
    {

    ma[arr[d]]->display(arr[d]);}
    else
    {settextstyle(1,HORIZ_DIR,3);
    outtextxy(10,550,"Wrong  Serial  Number Press Any Key To Continue Forward");

    a=getch();

    }
    }
else{outtextxy(10,480,"NO MOVIES FOUND");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE TO MAIN MENU");
    a=getch();
}



}

void edit( Movie *ma[],int index)
{
    char date_of_release[30];
	char movie_name[30];
	char director_name[30];
	char producer_name[30];
	int budget;
	int opening_weekend;
	int gross;
	int weekend_gross;
	int country_gross;
	int hours;
	int minutes;
	char actor_name[30];
	char actress_name[30];
	float rating;
	char country[30];

    char choice;
    cout<<"want to change date of release\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {
            int flag=0;
            while(flag!=1){
        cout<<"enter date of release(mm/dd/yyyy)";
           cin>>date_of_release;
            try{

             if(date_of_release[10]>=32 && date_of_release[10]<=127)
            {
                throw "enter correct date format!";
            }
             if(date_of_release[2]!='/' ||  date_of_release[5]!='/'
                || date_of_release[0]<'/' || date_of_release[1]<'/'
                || date_of_release[2]<'/'|| date_of_release[3]<'/'
                || date_of_release[7]<'/'|| date_of_release[6]<'/'
                || date_of_release[5]<'/'|| date_of_release[4]<'/'
                || date_of_release[8]<'/'|| date_of_release[9]<'/')
            {
                throw "enter correct date format!";
            }
            if(
                date_of_release[0]>'9' || date_of_release[1]>'9'
                || date_of_release[2]>'9'|| date_of_release[3]>'9'
                || date_of_release[7]>'9'|| date_of_release[6]>'9'
                || date_of_release[5]>'9'|| date_of_release[4]>'9'
                || date_of_release[8]>'9'|| date_of_release[9]>'9')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]=='0' && date_of_release[1]=='0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]>'1')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[0]=='1' && date_of_release[1]>'2')
            {
                throw "enter correct date format!";
            }



            if(date_of_release[3]=='0' &&  date_of_release[4]=='0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]=='0' &&  date_of_release[4]>'0')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]>'3' )
            {
                throw "enter correct date format!";
            }

            if(date_of_release[3]=='3' &&  date_of_release[3]>'1')
            {
                throw "enter correct date format!";
            }

            if(date_of_release[6]=='0' &&  date_of_release[7]=='0' && date_of_release[8]=='0' &&  date_of_release[9]=='0')
            {
                throw "enter correct date format!";
            }


            flag=1;
        }

        catch (const char* msg)
        {
         cerr << msg << endl;
        }
    }

    ma[index]->setdate_of_release(date_of_release);

    }

    cout<<"want to change movie name\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"movie_name= ";
        cin>>movie_name;

        ma[index]->setmovie_name(movie_name);
    }
    cout<<"want to change director name\n";
    cout<<"y or n? ";
    cout<<"y or n";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"director_name = ";
        cin>>director_name;
        ma[index]->cr->setdirector_name(director_name);
    }
//producer

    cout<<"want to change producer name\n";
    cout<<"y or n? ";
    cout<<"y or n";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"producer_name = " ;
        cin>>producer_name;
        ma[index]->cr->setproducer_name(producer_name);
    }
    //budget
    cout<<"want to change budegt\n";
    cout<<"y or n? ";

    cin>>choice;
    if(choice=='y')
    {

        cout<<"budget= ";
        cin>>budget;
        ma[index]->getb().setbudget(budget);
    }



    cout<<"want to change opening weekend\n";
    cout<<"y or n? ";cin>>choice;
    if(choice=='y')
    {

        cout<<"opening_weekend= ";
        cin>>opening_weekend;
        ma[index]->getb().setopening_weekend(opening_weekend);
    }

    //gross

    cout<<"want to change gross\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"gross= ";
        cin>>gross;
        ma[index]->getb().setgross(gross);
    }


    cout<<"want to change opening weekend \n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {
        cout<<"opening_weekend= ";
        cin>>opening_weekend;
        ma[index]->getb().setopening_weekend(opening_weekend);
    }

    cout<<"want to change weekend gross\n";
    cout<<"y or n? ";
    cin>>choice;

    if(choice=='y')
    {
        cout<<"weekend_gross= ";
        cin>>weekend_gross;
        ma[index]->getb().setweekend_gross(weekend_gross);
    }
    //countrygross
    cout<<"want to change country gross\n";
    cout<<"y or n? ";
     cin>>choice;
    if(choice=='y')
    {

        cout<<"country_gross= ";
        cin>>country_gross;
        ma[index]->getb().setcountry_gross(country_gross);
    }
    cout<<"want to change hours\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"hours= ";
        cin>>hours;
        ma[index]->getru().sethours(hours);
    }
     cout<<"want to change minutes\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"minutes = ";
        cin>>minutes;
        ma[index]->ru.setminutes(minutes);
    }
    //actor
     cout<<"want to change actor name\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"actor_name= ";
        cin>>actor_name;
        ma[index]->ca->setactor_name(actor_name);
    }
    //actress
     cout<<"want to change actress name\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {
        cout<<"actress_name= ";
        cin>>actress_name;
        ma[index]->ca->setactress_name(actress_name);
    }

    //rating
     cout<<"want to change rating\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"rating= ";
        cin>>rating;
        ma[index]->ra.setrating(rating);
    }
    //country
     cout<<"want to change country\n";
    cout<<"y or n? ";
    cin>>choice;
    if(choice=='y')
    {

        cout<<"country= ";
        cin>>country;
        ma[index]->ra.setcountry(country);
    }

    //////////////////

    FILE *fp;
    fp=fopen("pro1.txt","w");
    fseek(fp,0,0);


    for(int i=0;i<=moviecount;i++)
    {
        fprintf(fp,"\n%s %s %s %s %s %s %s %d %f %f %d %d %d %d %d %d %d %d %s %s %d %d\n",
        ma[i]->getmovie_name(),ma[i]->getgenre(),ma[i]->getdate_of_release(),
        ma[i]->cr->getdirector_name(),ma[i]->cr->getproducer_name(),ma[i]->cr->getcompany_name(),
        ma[i]->getra().getcountry(),ma[i]->getra().getperson_voted(),ma[i]->getra().getvotes(),ma[i]->getra().getrating(),
        ma[i]->getb().getweekend_gross(),ma[i]->getb().getopening_weekend(),ma[i]->getb().getgross(),
        ma[i]->getb().getcountry_gross(),ma[i]->getb().getbudget(),ma[i]->getru().gethours(),ma[i]->getru().getminutes(),
        ma[i]->getru().gettotal_time(),ma[i]->ca->getactor_name(),
        ma[i]->ca->getactress_name(),ma[i]->ca->getactress_movie_count(),
        ma[i]->ca->getactor_movie_count());

    }
initialize();

}

int main()
{castcount=-1;
crewcount=-1;
char a;
initwindow(1000,600);
initialize();

while(1)
{
    readimagefile("background.bmp",0,0,1000,600);

settextstyle(4,HORIZ_DIR,1);
outtextxy(10,98,"Enter 1 to view the entire database");
outtextxy(10,130,"Enter 2 to search a movie according to its name ");
outtextxy(10,160,"Enter 3 to add movies to database");
outtextxy(10,190,"Enter 4 to view/edit movies according to gross");
outtextxy(10,220,"Enter 5 to view/edit movies according to budget");
outtextxy(10,250,"Enter 6 to view movies according to rating range");
outtextxy(10,280,"Enter 7 to view/edit movies according to date of release");
outtextxy(10,310,"Enter 8 to view movies according to genre");
outtextxy(10,340,"Enter 9 to exit");
a=getch();


if(a=='1')
{
 int i;
for(i=0;i<=moviecount;i++)
{ma[i]->display(i);
 delay(100);}
}
else if(a=='2')
{
  search1();
}
else if(a=='4')
{
 grosssort(ma);
}
else if(a=='5')
{
 budgetsort(ma);
}
 else if(a=='6')
 {
  ratingsort(ma);

 }

else if(a=='3')
{
     new_object();

}
else if(a=='7')

{

 sortbydate( ma);}
else if(a=='8')
{
   displaygenre();
}
else if(a=='9')
{
exit(1);
}
else
{
    outtextxy(10,480,"WRONG OPTION");
    outtextxy(10,520,"PRESS ANY KEY TO CONTINUE");
    a=getch();
}

}


	return 0;
}
