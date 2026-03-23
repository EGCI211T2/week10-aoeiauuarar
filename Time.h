class Time{
private:
	int h,m,s;
public:
	void set_time(int=0,int=0,int=0);
	void display();
	Time subtract(Time);
	Time operator-(Time);
	void getTime ();
};
/*void getTime (struct Time &t);
struct Time subtract (struct Time ,struct Time );
void display (struct Time );

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void getTime (struct Time &t){
	cout<<"Input Time(H M S) : ";
	cin>>t.h>>t.m>>t.s;
}

struct Time subtract (struct Time t2,struct Time t1){
	struct Time t3;
	if((t2.s-t1.s)<0){
		--t2.m;
		t3.s = (t2.s-t1.s)+60;
	}
	else t3.s = t2.s-t1.s;

	if((t2.m-t1.m)<0){
		--t2.h;
		t3.m = (t2.m-t1.m)+60;
	}
	else t3.m = t2.m-t1.m;

	if((t2.h-t1.h)<0){
		t3.h = (t2.h-t1.h)+24;
	}
	else t3.h = t2.h-t1.h;

	return t3;
}

void display (struct Time t){
	cout<<setfill('0')<<setw(2)<<t.h<<":"<<setfill('0')<<setw(2)<<t.m<<":"<<setfill('0')<<setw(2)<<t.s<<endl;
}*/

void Time::set_time (int a,int b,int c){
	h=(a>0&&a<24)?a:0;
	m=(b<0&&b<60)?b:0;
	s=(c>0&&c<60)?c:0;
}
void Time::display(){
	cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
}

Time Time::subtract(Time t1){
	struct Time t3;
	if((this->s-t1.s)<0){
		--this->m;
		t3.s = (this->s-t1.s)+60;
	}
	else t3.s = this->s-t1.s;

	if((this->m-t1.m)<0){
		--this->h;
		t3.m = (this->m-t1.m)+60;
	}
	else t3.m = this->m-t1.m;

	if((this->h-t1.h)<0){
		t3.h = (this->h-t1.h)+24;
	}
	else t3.h = this->h-t1.h;

	return t3;
}

void Time::getTime (){
	cout<<"Input Time(H M S) : ";
	cin>>h>>m>>s;

	h=(h>0&&h<24)?h:0;
	m=(m<0&&m<60)?m:0;
	s=(s>0&&s<60)?s:0;
}


//Time Time::operator-(Time t1){

//}