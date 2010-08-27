/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "MCS-PROTOCOL-3"
 * 	found in "mcs.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy -fcompound-names -gen-PER`
 */

#ifndef	_TokenReleaseConfirm_H_
#define	_TokenReleaseConfirm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Result.h"
#include "UserId.h"
#include "TokenId.h"
#include "TokenStatus.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NonStandardParameter;

/* TokenReleaseConfirm */
typedef struct TokenReleaseConfirm {
	Result_t	 result;
	UserId_t	 initiator;
	TokenId_t	 tokenId;
	TokenStatus_t	 tokenStatus;
	struct TokenReleaseConfirm__nonStandard {
		A_SEQUENCE_OF(struct NonStandardParameter) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonStandard;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TokenReleaseConfirm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TokenReleaseConfirm;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NonStandardParameter.h"

#endif	/* _TokenReleaseConfirm_H_ */