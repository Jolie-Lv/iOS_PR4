/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MINIFYJPEG_H_RPCGEN
#define _MINIFYJPEG_H_RPCGEN

#include <rpc/rpc.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


struct JPEG_IN {
	struct {
		u_int buffer_len;
		char *buffer_val;
	} buffer;
};
typedef struct JPEG_IN JPEG_IN;

struct JPEG_OUT {
	struct {
		u_int buffer_len;
		char *buffer_val;
	} buffer;
};
typedef struct JPEG_OUT JPEG_OUT;

#define MINIFY_PROG 0x3f230001
#define MINIFY_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define MINIFY_JPEG_PROC 1
extern  enum clnt_stat minify_jpeg_proc_1(JPEG_IN , JPEG_OUT *, CLIENT *);
extern  bool_t minify_jpeg_proc_1_svc(JPEG_IN , JPEG_OUT *, struct svc_req *);
extern int minify_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define MINIFY_JPEG_PROC 1
extern  enum clnt_stat minify_jpeg_proc_1();
extern  bool_t minify_jpeg_proc_1_svc();
extern int minify_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_JPEG_IN (XDR *, JPEG_IN*);
extern  bool_t xdr_JPEG_OUT (XDR *, JPEG_OUT*);

#else /* K&R C */
extern bool_t xdr_JPEG_IN ();
extern bool_t xdr_JPEG_OUT ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MINIFYJPEG_H_RPCGEN */
