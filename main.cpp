#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h> //suiji 
#include<string.h>
#include<windows.h> //SLEEP函数
using namespace std;
struct Player{//玩家结构体 
	char name[20];
	char allname[100]; 
	int hp;
	int attack;
	int protect;
	int money;
	int moneyGet;
	int human;
	int object;
	int objectGet; 
}player={"国家","",100,10,10,100,0,0,100,0};
struct Building{
	int s_fac;
	int m_fac;
	int l_fac;
	int s_hou;
	int m_hou;
	int l_hou;
	int s_bak;
	int m_bak;
	int l_bak;
	int n_fac;
	int n_hou;
	int n_bak;
}building{0,0,0,0,0,0,0,0,0,0,0,0};
int suiJi(int a){
    srand((unsigned)time(NULL));
    return rand()%a;
}
void fenge(){
	cout<<endl<<endl<<"------分割线------"<<endl<<endl;
}
void build(){
	int a;
	cout<<"请选择建筑"<<endl;
	_sleep(200);
	cout<<endl<<endl<<"1.小工厂(50) 2.工厂(100) 3.高级工厂(200) 4.小院子(50) 5.公寓(200) 6.大厦(1000) 7.小公司（100） 8.银行（200） 9.国库（500）";
	cout<<"10.纳米工厂（500） 11.商业街（5000） 12.二次元国库（2000）"<<endl<<endl;
	cin>>a;
	if(a==1){
		if(player.object<50||player.money<20){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：小工厂"<<endl<<endl;
			player.object-=50;
			player.money-=20;
			building.s_fac+=1;
			player.moneyGet+=20;
			player.objectGet+=50;
		}
	}else if(a==2){
		if(player.object<100||player.money<50){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：工厂"<<endl<<endl;
			player.object-=100;
			player.money-=50;
			building.m_fac+=1;
			player.moneyGet+=50;
			player.objectGet+=100;
		}
	}else if(a==3){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：高级工厂"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.l_fac+=1;
			player.moneyGet+=100;
			player.objectGet+=1000;
		}
	}else if(a==4){
		if(player.object<50||player.money<10){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：小院子"<<endl<<endl;
			player.object-=50;
			player.money-=10;
			building.s_hou+=1;
			player.human+=5;
			player.moneyGet+=1;
		}
	}else if(a==5){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：公寓"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.m_hou+=1;
			player.human+=100;
			player.moneyGet+=20;
		}
	}else if(a==6){
		if(player.object<1000||player.money<500){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：大厦"<<endl<<endl;
			player.object-=1000;
			player.money-=500;
			building.l_hou+=1;
			player.human+=2000;
			player.moneyGet+=2000/5;
		}
	}else if(a==7){
		if(player.object<100||player.money<20){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：小公司"<<endl<<endl;
			player.object-=100;
			player.money-=20;
			building.s_bak+=1;
			player.moneyGet+=200;
		}
	}else if(a==8){
		if(player.object<200||player.money<100){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：银行"<<endl<<endl;
			player.object-=200;
			player.money-=100;
			building.m_bak+=1;
			player.moneyGet+=500;
		}
	}else if(a==9){
		if(player.object<500||player.money<300){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：国库"<<endl<<endl;
			player.object-=500;
			player.money-=300;
			building.l_bak+=1;
			player.moneyGet+=5000;
		}
	}else if(a==10){
		if(player.object<500||player.money<300){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：纳米工厂"<<endl<<endl;
			player.object-=500;
			player.money-=300;
			building.n_fac+=1;
			player.objectGet+=1000;
		}
	}else if(a==11){
		if(player.object<2000||player.money<1000){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：商业街"<<endl<<endl;
			player.object-=2000;
			player.money-=1000;
			building.n_hou+=1;
			player.human+=80000;
		}
	}else if(a==12){
		if(player.object<2000||player.money<1000){
			_sleep(200);
			cout<<endl<<"不能建造！！！"<<endl<<endl;
		}else{
			_sleep(200);
			cout<<endl<<"已建造：二次元国库"<<endl<<endl;
			player.object-=2000;
			player.money-=1000;
			building.n_bak+=1;
			player.moneyGet+=5000; 
		}
	}
}
void check(){
	cout<<"血："<<player.hp<<endl;
	cout<<"防护："<<player.protect<<endl;
	cout<<"攻击："<<player.attack<<endl;
	cout<<"人口："<<player.human<<endl;
	cout<<"钱："<<player.money<<endl;
	cout<<"资源："<<player.object<<endl;
	cout<<"赚钱："<<player.moneyGet<<endl;
	cout<<"生产力："<<player.objectGet<<endl;
	cout<<"小工厂："<<building.s_fac<<endl;
	cout<<"工厂："<<building.m_fac<<endl;
	cout<<"高级工厂："<<building.l_fac<<endl;
	cout<<"小院子："<<building.s_hou<<endl;
	cout<<"公寓："<<building.m_hou<<endl;
	cout<<"大厦："<<building.l_hou<<endl;
	cout<<"小公司："<<building.s_bak<<endl;
	cout<<"银行："<<building.m_bak<<endl;
	cout<<"国库："<<building.l_bak<<endl;
	cout<<"纳米工厂："<<building.n_fac<<endl;
	cout<<"商业街："<<building.n_hou<<endl;
	cout<<"二次元国库："<<building.n_bak<<endl;
}
void buy(){
	int b; 
	int c;
	cout<<endl<<"您是要卖出还是买入资源？？"<<endl<<endl<<"1.买入 2.卖出"<<endl;
	cin>>b;
	fenge(); 
	if(b==1){
		cout<<"您要买多少资源"<<endl;
		cin>>c;
		if(c>player.money*2){
			cout<<"钱不够！"<<endl;
		}else{
			player.money-=c/2;
			player.object+=c;
		}
	}else if(b==2){
		cout<<"您要卖多少资源"<<endl;
		cin>>c;
		if(c>player.object){
			cout<<"东西不够！"<<endl;
		}else{
			player.money+=c/2;
			player.object-=c;
		}
	}
}
int main(){
	cout<<"alpha 1.6.1"<<endl<<endl; 
	printf("欢迎来到国家游戏，在这里，你需要发展资源，经历战争，成为世界强国！！！");
	_sleep(100);
	printf("\n\n------分割线------\n\n");
	_sleep(100);
	printf("您国家的全称(<=50)：");
	scanf("%s",player.allname); 
	_sleep(200);
	printf("您国家的简称(<=10)：");
	scanf("%s",player.name);
	_sleep(200);
	cout<<"您国家的全称是"<<player.allname<<"，简称是"<<player.name<<"。"<<endl<<endl;
	if(player.allname=="中华人民共和国"&&player.name=="中国"){
		_sleep(1000);
		cout<<endl<<"此生无悔入华夏,"<<endl;
		_sleep(500);
		cout<<endl<<"来世还做中国人！"<<endl;
		cout<<"无敌版本开启！！！"<<endl; 
		player.hp=10000;
		player.human=1400000000;
		player.money=1000000000000;
		player.moneyGet=10000000000;
		player.object=1000000000000;
		player.objectGet=100000000000;
		player.attack=10000000;
		player.protect=10000000; 
	}
	if(player.name=="USA"){
		_sleep(1000);
		cout<<endl<<"川普没了..."<<endl;
		_sleep(500);
		cout<<"最傻版本开启！！！"<<endl; 
		player.hp=1;
		player.human=0;
		player.money=0;
		player.moneyGet=-10000;
		player.object=0;
		player.objectGet=-10000;
		player.attack=-1000;
		player.protect=-1000; 
	}
	while(1){
		int a;
		cout<<endl<<"您想干什么？？？"<<endl<<endl<<"0.教程 1.建筑 2.查看 3.过年 4.交易"<<endl;
		cin>>a;
		fenge();
		if(a==0){
			cout<<"您可以先建一些工厂"<<endl<<endl<<endl; 
		}else if(a==1){
			build();
		}else if(a==2){
			check(); 
		}else if(a==3){
			player.money+=player.moneyGet;
			player.money-=player.human*2;
			player.object+=player.objectGet;
			player.object-=player.human/2;
			check();
		}else if(a==4){
			buy();
		}
		if(player.money<0||player.object<0){
			fenge();
			cout<<"您破产了!!"; 
			return 0;
		} 
	}
}
