
#ifndef SCIP_EXPORT_H
#define SCIP_EXPORT_H

#ifdef SCIP_STATIC_DEFINE
#  define SCIP_EXPORT
#  define SCIP_NO_EXPORT
#else
#  ifndef SCIP_EXPORT
#    ifdef libscip_EXPORTS
/* We are building this library */
#      define SCIP_EXPORT
#    else
/* We are using this library */
#      define SCIP_EXPORT
#    endif
#  endif

#  ifndef SCIP_NO_EXPORT
#    define SCIP_NO_EXPORT
#  endif
#endif

#endif /* SCIP_EXPORT_H */
