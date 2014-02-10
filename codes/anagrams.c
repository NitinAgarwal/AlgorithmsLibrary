/* Program to show whether the two entered strings are anagrams of 
	each other or not */
	
#include<stdio.h>

int check_anagram(char a[], char b[])
{
	int first[26]={0}, second[26]={0};
	int i=0;
	while (a[i] != '\0'){
		first[a[i]-'a']++;
		i++;
	}
	while (b[i] != '\0'){
		first[b[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++){
		if(first[i] != second[i])
			return 0;
	}
	return 1;
}

int main()
{
	int a[100],b[100];
	printf("Enter first string\n");
	scanf("%s",a);
	printf("Enter second string\n");
	scanf("%s",b);
	
	int flag = check_anagram(a,b);
	if(flag == 1)
		printf("strings are anagrams\n");
	else
		printf("strings are not anagrams\n");
	return 0;
}


