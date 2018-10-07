//
// Created by root on 18-10-7.
//

#ifndef AST_DELETE_REDUNDANT_INFORMATION_H
#define AST_DELETE_REDUNDANT_INFORMATION_H
#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<vector>
using namespace std;


struct StructNode
{
    bool NotNull;
    string NodeName;
    string NodeSequenceNUm;
    string name;
    string type;
    string chan;
    string strg;
    int lngt;
    string size;
    int algn;
    int prec;
    string sign;
    string min;
    string max;
    int low;
    int high;
    string unql;
    string ptd;
    string mngl;
    string srcp;
    string body;
    string link;
    string retn;
    string prms;
    string valu;
    string qual;
    string tag;
    string flds;
    string args;
    string scpe;
    string bpos;
    string argt;
    int used;
    string expr;
    string elts;
    string op0;
    string op1;
    string note;
    string op2;
    string fn;
    string vars;
    string labl;
    string domn;
    string refd;
    bool ifvisited;///////////////////////////////////////////
    bool ifuseful;/////////////////////////////////////////////
}structArray[5000];//将structArray改成了structArra

void Delete_redundant_information(string file_position);


#endif //AST_DELETE_REDUNDANT_INFORMATION_H
