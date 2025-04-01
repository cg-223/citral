#pragma once
#include "scanner.h"
#include <stdint.h>
typedef enum astType {
	AST_WHILE,
} astType;

typedef union astLiteralUnion {
	float asFloat;
	double asDouble;
	uint8_t asUI8;
	uint16_t asUI16;
	uint32_t asUI32;
	uint64_t asUI64;
	int8_t asI8;
	int16_t asI16;
	int32_t asI32;
	int64_t asI64;
	char* asStr;
} astLiteralUnion;



typedef struct astNode {
	astType type;
	struct astNode* left;
	struct astNode* right;
	astLiteralUnion literal;
};

typedef struct parserState {
	scannerState* encompassingScanner;

} parserState;