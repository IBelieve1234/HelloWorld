//
// Created by root on 18-10-7.
//
#include"Delete_redundant_information.h"
void Delete_redundant_information(string file_position){

    fstream inFile;
    inFile.open(file_position,ios::in);
    string bufLine;
    int count;
    while(!inFile.eof())
    {
        getline(inFile,bufLine);//Read a Line.
        count++;
        cout<<bufLine<<endl;
        bufLine.clear();
    }
    inFile.close();

    //ppt page 35 (3)  读信息到结构体+初始化访问标记
    inFile.open(file_position,ios::in);
    for(int i=1;i<count;i++)
    {
        string str;
        getline(inFile,str);//read to str
        vector<string>arr;
        istringstream ss(str);
        string word;
        while(ss>>word){
            arr.push_back(word);
        }
        structArray[i].ifuseful=false;
        structArray[i].ifvisited=false;
        structArray[i].NodeSequenceNUm=arr[0];
        structArray[i].NodeName=arr[1];
        for(size_t j=2;j<arr.size();j++){
            if(arr[j]=="name:")
            {   j++;
                structArray[i].name=arr[j];
            }
            if(arr[j]=="type:")
            {   j++;
                structArray[i].type=arr[j];
            }
            if(arr[j]=="chan:")
            {   j++;
                structArray[i].chan=arr[j];
            }
            if(arr[j]=="strg:")
            {   j++;
                structArray[i].strg=arr[j];
            }
            if(arr[j]=="size:")
            {   j++;
                structArray[i].size=arr[j];
            }
            if(arr[j]=="sign:")
            {   j++;
                structArray[i].sign=arr[j];
            }
            if(arr[j]=="min:")
            {   j++;
                structArray[i].min=arr[j];
            }
            if(arr[j]=="max:")
            {   j++;
                structArray[i].max=arr[j];
            }
            if(arr[j]=="unql:")
            {   j++;
                structArray[i].unql=arr[j];
            }
            if(arr[j]=="ptd:")
            {   j++;
                structArray[i].ptd=arr[j];
            }
            if(arr[j]=="mngl:")
            {   j++;
                structArray[i].mngl=arr[j];
            }
            if(arr[j]=="srcp:")
            {   j++;
                structArray[i].srcp=arr[j];
            }
            if(arr[j]=="body:")
            {   j++;
                structArray[i].body=arr[j];
            }
            if(arr[j]=="link:")
            {   j++;
                structArray[i].link=arr[j];
            }
            if(arr[j]=="retn:")
            {   j++;
                structArray[i].retn=arr[j];
            }
            if(arr[j]=="prms:")
            {   j++;
                structArray[i].prms=arr[j];
            }
            if(arr[j]=="valu:")
            {   j++;
                structArray[i].valu=arr[j];
            }
            if(arr[j]=="qual:")
            {   j++;
                structArray[i].qual=arr[j];
            }
            if(arr[j]=="tag:")
            {   j++;
                structArray[i].tag=arr[j];
            }
            if(arr[j]=="flds:")
            {   j++;
                structArray[i].flds=arr[j];
            }
            if(arr[j]=="args:")
            {   j++;
                structArray[i].args=arr[j];
            }
            if(arr[j]=="scpe:")
            {   j++;
                structArray[i].scpe=arr[j];
            }
            if(arr[j]=="bpos:")
            {   j++;
                structArray[i].bpos=arr[j];
            }
            if(arr[j]=="argt:")
            {   j++;
                structArray[i].argt=arr[j];
            }
            if(arr[j]=="expr:")
            {   j++;
                structArray[i].expr=arr[j];
            }
            if(arr[j]=="elts:")
            {   j++;
                structArray[i].elts=arr[j];
            }
            if(arr[j]=="op0:")
            {   j++;
                structArray[i].op0=arr[j];
            }
            if(arr[j]=="op1:")
            {   j++;
                structArray[i].op1=arr[j];
            }
            if(arr[j]=="note:")
            {   j++;
                structArray[i].note=arr[j];
            }
            if(arr[j]=="op2:")
            {   j++;
                structArray[i].op2=arr[j];
            }
            if(arr[j]=="fn:")
            {   j++;
                structArray[i].fn=arr[j];
            }
            if(arr[j]=="vars:")
            {   j++;
                structArray[i].vars=arr[j];
            }
            if(arr[j]=="labl:")
            {   j++;
                structArray[i].labl=arr[j];
            }
            if(arr[j]=="domn:")
            {   j++;
                structArray[i].domn=arr[j];
            }
            if(arr[j]=="refd:")
            {   j++;
                structArray[i].refd=arr[j];
            }
            ///////////////////////////////
            if(arr[j]=="lngt:")
            {   j++;
                structArray[i].lngt=atoi(arr[j].c_str());
            }
            if(arr[j]=="algn:")
            {   j++;
                structArray[i].algn=atoi(arr[j].c_str());
            }
            if(arr[j]=="prec:")
            {   j++;
                structArray[i].prec=atoi(arr[j].c_str());
            }
            if(arr[j]=="low:")
            {   j++;
                structArray[i].low=atoi(arr[j].c_str());
            }
            if(arr[j]=="high:")
            {   j++;
                structArray[i].high=atoi(arr[j].c_str());
            }
            if(arr[j]=="used:")
            {   j++;
                structArray[i].used=atoi(arr[j].c_str());
            }



        }

    }//已读取信息到结构体
    for(int i=1;i<count;i++)//寻找根有用节点
        if(structArray[i].srcp.find(".c")!=string::npos)
            structArray[i].ifuseful=true;

        cout<<structArray[1].NodeSequenceNUm<<endl;
        cout<<structArray[count].NodeSequenceNUm<<endl;




}
