#include <stdio.h>

float calculate_time(float, float);

int main(void)
{
  float download_speed, file_size;

  printf("Tell me your download speed in Mb/s:  - ");
  scanf("%f", &download_speed);

  printf("Tell me the file size in MB:  - ");
  scanf("%f", &file_size);

  float time_taken = calculate_time(download_speed, file_size);

  printf("At %.2f megabits per second, a file of %.2f megabytes\n"
  "downloads in %.2f seconds.", download_speed, file_size, time_taken);

  return 0;
}

float calculate_time(float download_speed, float file_size)
{
  float download_speed_in_MB = download_speed / 8;

  return file_size / download_speed_in_MB;
}