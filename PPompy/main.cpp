#include <iostream>
#include <fstream>

void fill_data(){
    std::ofstream file;
    

    std::cout<<"Podaj nazwę zestawu danych: ";
    std::string name;
    std::getline(std::cin,name);
    name+=".txt";
    const char *filename=name.c_str();
    file.open(filename);
    for (size_t i = 0; i < 4 ; i++)
    {   
        float x;
        if (i%2==0)
        {
            std::cout<<"Podaj X";
            std::cin>>x;
            file<<x<<"\n";
            x=0;
        }
        else{
            std::cout<<"Podaj y";
            std::cin>>x;
            file<<x<<"\n";
            x=0;
        }
    }
    file.close();
    file.open("file_names.txt", std::ios_base::app);
    file<<filename<<"\n";
    file.close();
    getchar();
}

void show_data(std::string file_name){

}

int main(){
    fill_data();
    fill_data();
    fill_data();
    system("python\\coeficients.py");
    return 0;
}