#ifndef _GOLD_DEBUG_H
#define _GOLD_DEBUG_H

 

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

//#define GI_DEBUG

#ifdef GI_DEBUG

#define GI_DEBUG_POINT()   printf("\n\n[File:%s Line:%d] Fun:%s\n\n", __FILE__, __LINE__, __FUNCTION__)
#define dbg_printf(arg...)   printf(arg);

#define GI_ASSERT(expr)                                     \
    do{                                                     \
        if (!(expr)) { \
            printf("\nASSERT failed at:\n  >File name: %s\n  >Function : %s\n  >Line No. : %d\n  >Condition: %s\n", \
                    __FILE__,__FUNCTION__, __LINE__, #expr);\
        } \
    }while(0);

/*调试宏, 用于暂停*/
#define GI_DEBUG_PAUSE()           \
 do               \
 {               \
  GI_DEBUG_POINT();          \
  printf("pause for debug, press 'q' to exit!\n");  \
  char c;             \
  while( ( c = getchar() ) )        \
   {             \
    if('q' == c)         \
     {           \
      getchar();        \
      break;         \
     }           \
   }             \
 }while(0);
#define GI_DEBUG_PAUSE_ARG(arg...)          \
  do               \
  {               \
   printf(arg);           \
   GI_DEBUG_PAUSE()          \
  }while(0);


#define GI_DEBUG_ASSERT(expression)      \
if(!(expression))                        \
{                                  \
    printf("[ASSERT],%s,%s:%d\n", __FILE__,  __FUNCTION__, __LINE__);\
    exit(-1);             \
}
#else
#define GI_ASSERT(expr)
#define GI_DEBUG_PAUSE()
#define GI_DEBUG_PAUSE_ARG(arg...) 
#define GI_DEBUG_POINT()
#define dbg_printf(arg...)
#define GI_DEBUG_ASSERT(expression)

#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif
