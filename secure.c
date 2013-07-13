/*==========================================================================================
||	
||	Copyright (C) 2013  Ravi Malik
||	
||	This program is free software; you can redistribute it and/or
||	modify it under the terms of the GNU General Public License
||	as published by the Free Software Foundation; either version 2
||	of the License, or (at your option) any later version.
||	
||	This program is distributed in the hope that it will be useful,
||	but WITHOUT ANY WARRANTY; without even the implied warranty of
||	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
||	GNU General Public License for more details.
||	
||	You should have received a copy of the GNU General Public License
||	along with this program; if not, write to the Free Software
||	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
||	
||
*==========================================================================================*/

#include<stdio.h>
#include"CryptoLibAES-128/encrypt_file.h"
#include"password_tools.h"
#include<string.h>

void main(int argc, char* argv[])
{	FILE *fp_i,*fp_o;
	fp_i=fopen(argv[2],"rb");
	fp_o=fopen(argv[4],"wb");
	unsigned char pwd[17];	
	struct block key;	
	hash_password(argv[3],pwd);
	key=prepare_key(pwd);
	if(!strcmp(argv[1],"-e"))
	{	encrypt_file(fp_i,key,fp_o);
	}
	else if(!strcmp(argv[1],"-d"))
	{	decrypt_file(fp_i,key,fp_o);
	}
	else
	{	printf("Please enter correct mode of operation (-e/-d).");
	}
	fclose(fp_i);
	fclose(fp_o);
}
