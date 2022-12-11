#include <stdio.h> 
 int main()
{
    int flag1, flag2, flag3, i, j, k, position, max, faults = 0;
    int num_frames,num_pages;
    printf("enter the number of frames: ");
    scanf("%d",&num_frames);
    int frames[num_frames];
    int temp[num_frames];
     printf("enter the number of pages: ");
    scanf("%d",&num_pages);
    printf("Enter the reference string: ");
    int inputStream[num_pages];

for(int i=0;i<num_pages;i++)
{
    scanf("%d",&inputStream[i]);
}
    for(i = 0; i < num_frames; i++){
        frames[i] = -1;
    }
    for(i = 0; i < num_pages; i++){
        flag1 = flag2 = 0;
        for(j = 0; j < num_frames; j++){
            if(frames[j] == inputStream[i]){
                   flag1 = flag2 = 1;
                   break;
               }
        }

        if(flag1 == 0){
            for(j = 0; j < num_frames; j++){
                if(frames[j] == -1){
                    faults++;
                    frames[j] = inputStream[i];
                    flag2 = 1;
                    break;
                }
            }    
        }

        if(flag2 == 0){
            flag3 =0;
            for(j = 0; j < num_frames; j++){
                temp[j] = -1;
                for(k = i + 1; k < num_pages; k++){
                    if(frames[j] == inputStream[k]){
                        temp[j] = k;
                        break;
                    }
                }
            }
            for(j = 0; j < num_frames; j++){
                if(temp[j] == -1){
                    position = j;
                    flag3 = 1;
                    break;
                }
            }

            if(flag3 ==0){
                max = temp[0];
                position = 0;

                for(j = 1; j < num_frames; j++){
                    if(temp[j] > max){
                        max = temp[j];
                        position = j;
                    }
                }               
            }
            frames[position] = inputStream[i];
            faults++;
        }
        printf("\n");
        for(j = 0; j < num_frames; j++){
            printf("%d\t", frames[j]);
        }
    }
    printf("\n\nTotal Page Faults = %d", faults);
    printf("\nTotal Hits = %d", num_pages-faults);
    return 0;
}
