int main()
{
 int age;
 Vote:
 printf("you are eligible for voting");
 NoVote:
 printf("you are not eligible to vote");
 printf("Enter you age:");
 scanf("%d", &age);
 if(age>=18)
 goto Vote;
 else
 goto NoVote;
 return 0;
}
