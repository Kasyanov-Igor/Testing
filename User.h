#pragma once
#include <iostream>

__interface User
{
	virtual void Registration()=0;
	virtual void Check_pass()=0;
	virtual void Check_login()=0;
	virtual std::string Encryption(std::string& pass) =0;

};

