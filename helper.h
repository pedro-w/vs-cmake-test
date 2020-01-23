#  if defined(HELPER_LIBRARY)
#    define DECLSPEC __declspec(dllexport)
#  else
#    define DECLSPEC __declspec(dllimport)
#  endif
DECLSPEC const char*  message(void);