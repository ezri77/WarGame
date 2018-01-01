#include <iostream>
#include <fstream>


//int main() {
class 
    std::ifstream file ( "init_file_example.csv" ); 
	std::cout << file.good()<< std::endl;
	
	return 0;
//}


string temp;
    string BS;
    string BSx;
    string BSy;
    ifstream ip;
    ip.open("init_file.csv");
    if(!ip.is_open())std::cout << "error" << std::endl;
    ip>>temp;
     
    ip>>temp;
     
    ip>>BSx;
    
    cout << BSx << endl;

    ip>>BSy;
    cout << BSy << endl;
 
 
    const int x=std::stoi( BSx );
    const    int y=std::stoi( BSy );
    Object filde[x][y];
    
    int playerS;
    int soldierS;
    ip>>temp;
    ip>>playerS;
    ip>>temp;
    ip>>soldierS;
    string humen;
    bool cuputer;
    string Sname;
    string loction;
    string weapon;
    soldier* tempsoldier;
    player* playerArr=new player[playerS];
    string playernum="1";
    for (int j=0;j<playerS;j++){
        vector<soldier*> soldierV;
        ip>>temp;
        ip>>humen;
        if(humen=="humen")  
            cuputer==true;
        else
            cuputer=false;
        playerArr[j]=new player(cuputer);
        for (int i=0;i<soldierS;i++){
            ip>>Sname;
            ip>>loction;
            double x=getXfromString(loction);
            double y=getYfromString(loction);
          
            if(Sname!="paramedic"){
                ip>>weapon;
                Weapon* w= createW(weapon);
                if(Sname=="normal")  {
                  tempsoldier= new RegularSoldier(x,y,w);}
                else{
                   tempsoldier= new SniperSoldier(x,y,w);
                }
            
            }
            else{
                 tempsoldier=  new MedicSoldier(x,y);}
                 soldierV.push_back(tempsoldier);
                 if(cuputer){
                     FileControl F(soldierV,playerArr[j],"player"+playernum+".csv");
                     F.readFile();
                     playernum=playernum+1;
                     
                 }
                 else{
                     //std::vector<soldierloctioncumpoter> s;
                     std::vector<soldier*>::iterator iter= soldierV.begin();
                     std::vector<soldier*>::iterator iterE= soldierV.end();
                     while  (iter!=iterE){
                         soldierloctioncumpoter* s=new soldierloctioncumpoter(iter);
                         playerArr[j].AddSoldier(s);
                     }
                 }
            //playerArr[j].AddSoldier(tempsoldier);
    }
    
    }
    
    vector<objectloction>  object_in_the_area;
    ip>>temp;
    //object_in_the_area =create_object_area(ip,x,y);
    while (!ip.eof()){
        ip>>Sname;
        if(Sname=="Weapon"){
            ip>>weapon;
            Weapon* h=createW(weapon);
            ip>>loction;
            double getx=getXfromString(loction);
            double gety=getYfromString(loction);
            Weapon* Wea =h;
            objectloction o(Wea,getx,gety);
            object_in_the_area.push_back(o);
        }
        else{
            double getx=rand() % x;
            double gety=rand() % y;
            if(Sname=="Armor"){
                
                ip>>temp;
                
                if(temp=="BodyArmor"){
                    ip>>temp;
                    double armor_level=stod(temp);
                    BodyArmor* b=new BodyArmor(armor_level) ;
                    objectloction o(b,getx,gety);
                    object_in_the_area.push_back(o);
                    
                }
                else {
                 ip>>temp;
                    double armor_level=stod(temp);
                    ShieldArmor* b=new ShieldArmor(armor_level) ;
                    objectloction o(b,getx,gety);
                    object_in_the_area.push_back(o);
                }
                    
            }
            else{// soild object
            string name;
            ip>> name;
            int w,h;
            ip>>w;
            ip>>h;
            Soild* s=new Soild(name,w,h);
            objectloction o(s,getx,gety);
                    object_in_the_area.push_back(o);
                    
                }
            }
        }
    return 0;
}
double getXfromString(std::string loction){
    int i;
    for(i=0;i<loction.length();i++){
        if(loction.at(i)==' ')
          break;
    }
   string s= loction.substr(1,i);
    return stod(s);
}
double getYfromString(std::string loction){
    int i;
    for(i=0;i<loction.length();i++){
        if(loction.at(i)==' ')
          break;
    }
   string s= loction.substr(i+1,loction.length()-1);
   return stod(s);
    
}
Weapon* createW (std::string w){
    if(w=="M16"){
        return new M16();}
    else if (w=="Uzi"){
        return new Uzi();}
          else if (w=="Missile")
            return new Missile();
        
    
}
/*std::vector<objectloction> create_object_area(ifstream ip,int x,int y){
    string temp;
    ip>>temp;
    string loction,Sname,weapon;
vector<objectloction>    object_in_the_area; 
//    object_in_the_area =create_object_area(ip);
    while (!ip.eof()){
        ip>>Sname;
        if(Sname=="Weapon"){
            ip>>weapon;
            Weapon h=createW(weapon);
            ip>>loction;
            double getx=getXfromString(loction);
            double gety=getYfromString(loction);
            Weapon* Wea =&h;
            objectloction o(Wea,getx,gety);
            object_in_the_area.push_back(o);
        }
        else{
            double getx=rand() % x;
            double gety=rand() % y;
            if(Sname=="Armor"){
                
                ip>>temp;
                
                if(temp=="BodyArmor"){
                    ip>>temp;
                    double armor_level=stod(temp);
                    BodyArmor* b=new BodyArmor(armor_level) ;
                    objectloction o(b,getx,gety);
                    object_in_the_area.push_back(o);
                    
                }
                else {
                 ip>>temp;
                    double armor_level=stod(temp);
                    ShieldArmor* b=new ShieldArmor(armor_level) ;
                    objectloction o(b,getx,gety);
                    object_in_the_area.push_back(o);
                }
                    
            }
            else{// soild object
            string name;
            ip>> name;
            int w,h;
            ip>>w;
            ip>>h;
            Soild* s=new Soild(name,w,h);
            objectloction o(s,getx,gety);
                    object_in_the_area.push_back(o);
                    
                }
            }
        }
        return object_in_the_area;
}
*/
