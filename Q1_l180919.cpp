#include <iostream>
#include <string>
using namespace std;
#include "Header.h"
#include <fstream>


void readDataFromFile(GitHubUser * &users, string filepath)
{
	ifstream read;
	read.open("Lab 2.txt");
	{

		int x;
		read >> x;
		users = new GitHubUser[2];
		for (int i = 0; i < 2; i++)
		{
			read >> users[i].firstName;
			cout << users[i].firstName << endl;
			read >> users[i].userName;
			cout << users[i].userName << endl;
			read >> users[i].email;
			cout << users[i].email << endl;
			read >> users[i].folderCount;
			users[i].GitHubFolders = new string[users[i].folderCount];
			for (int j = 0; j < users[i].folderCount; j++)
			{
				getline(read, users[i].GitHubFolders[j]);
			}

		}
	}
}

int main()
{
	GitHubUser * users = nullptr;
	string filepath;
	readDataFromFile(users, filepath);

	return 0;
}





