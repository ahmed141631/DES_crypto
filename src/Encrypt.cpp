/* 
	this class will first read the file (want to be encrypted) and will read also the key file 
	then will make an object from DES class and the file (want to be encrypted will pass to it)




*/
#include <iostream>


class Encrypt
{
public:
	Encrypt(){}
	Encrypt(std::string filename, std::string keyfilename) {
		this->filename = filename;
		this->keyfilename = keyfilename;
	}

private:
	std::string filename;
	std::string keyfilename;
};

