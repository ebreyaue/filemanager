#ifndef FILEPATH_H_INCLUDED
#define FILEPATH_H_INCLUDED

string make_delimiter(string data,string delimiter)
{
//if_delimiter("{},'',[],()")    
return data + delimiter;    
}

//get specific folder
string get_files(string path)
{
struct dirent *d;
string ls;
DIR *dr;

dr = opendir(path.c_str()); 
if(!dr == NULL)
{
for(d=readdir(dr);d!=NULL;d=readdir(dr))
{
ls+=make_delimiter(",",d->d_name);   
}
closedir(dr);
    }
return ls;
}


string pwd()
{
char buff[PATH_MAX];
_getcwd(buff,PATH_MAX);
return buff;   
}

#endif