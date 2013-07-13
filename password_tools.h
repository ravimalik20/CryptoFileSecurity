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


#include<string.h>
#include"CryptoLibSHA-256/hash_string.h"

void hash_password(char *str, unsigned char *pass)
{	struct hash hs;
	hs=hash_string(str);
	char hex_str[65];
	hash_to_hex_string(&hs,hex_str);
	unsigned char pwd[17];
	int i;
	for(i=0;i<16;i++)
	{	pwd[i]=hex_str[i];
	}
	pwd[16]='\0';
	for(i=0;i<17;i++)
	{	pass[i]=pwd[i];
	}
}
