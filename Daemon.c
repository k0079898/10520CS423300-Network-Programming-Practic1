int main()
{
  int PID;
  if(fork()) return 0;
  PID = setsid();
  printf("PID: %d\n", PID);
  while(1)
  {
    printf("Hello!\n");
    sleep(2);
  }
}
