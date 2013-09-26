package org.cidarlab.eugene.rules;

public enum RuleOperator {
	/* UNARY STRUCTURAL/POSITIONAL RULES */
	CONTAINS, NOTCONTAINS, STARTSWITH, ENDSWITH,
	
	/* BINARY STRUCTURAL/POSITIONAL RULES */
	AFTER, BEFORE, NEXTTO, THEN, WITH, NOTWITH,
	
	/* RELATIONAL RULES */
	NOTEQUALS, EQUALS,
	
	/* NUMBERING/COUNTING RULES */
	MORETHAN, NOTMORETHAN, EXACTLY, NOTEXACTLY,
	
	/* RELATIONSHIP RULES */
	REPRESSES, INDUCES, DRIVES, BINDS, MATCHES,
	
	/* BIO-RULES */
	ORTHO
}