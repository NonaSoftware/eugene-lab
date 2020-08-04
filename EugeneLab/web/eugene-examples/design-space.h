/** PROPERTIES ***/
Property Name(txt);
Property Sequence(txt);
Property Represses(txt);
Property InducedBy(txt);
Property PromoterType(txt);

/** PART TYPES ***/
PartType Promoter(Name, Sequence, PromoterType);
PartType RBS (Name, Sequence);
PartType Repressor(Name, Sequence, Represses);
PartType Reporter(Name, Sequence);
PartType Terminator(Name, Sequence);


//***************************
// Define the Design Space
//***************************

/*** Inducible Promoters ***/
Promoter pBad(
    .Name("pBad"),
    .Sequence("acattgattatttgcacggcgtcacactttgctatgccatagcaagatagtccataagattagcggatcctacctgacgctttttatcgcaactctctactgtttctccataccgtttttttgggctagc"),
    .PromoterType("Inducible"));

Promoter pDntR(
    .Name("pDntR"),
    .Sequence("ATAC"),
    .PromoterType("Inducible"));


/*** Repressible Promoters ***/
Promoter pLux(
    .Name("pLux"),
    .Sequence("acctgtaggatcgtacaggtttacgcaagaaaatggtttgttatagtcgaatacctctggcggtgata"),
    .PromoterType("Repressible"));
    
Promoter pTetR(
    .Name("pTetR"),
    .Sequence("tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcac"),
    .PromoterType("Repressible"));
 
Promoter pCI(
    .Name("pCI"),
    .Sequence("taacaccgtgcgtgttgactattttacctctggcggtgataatggttgc"),
    .PromoterType("Repressible"));


/*** Repressors ***/
Repressor cI(
    .Name("BBa_C0051"),
    .Represses("pCI"),
    .Sequence("atgagcacaaaaaagaaaccattaacacaagagcagcttgaggacgcacgtcgccttaaagcaatttatgaaaaaaagaaaaatgaacttggcttatccc
aggaatctgtcgcagacaagatggggatggggcagtcaggcgttggtgctttatttaatggcatcaatgcattaaatgcttataacgccgcattgcttgc
aaaaattctcaaagttagcgttgaagaatttagcccttcaatcgccagagaaatctacgagatgtatgaagcggttagtatgcagccgtcacttagaagt
gagtatgagtaccctgttttttctcatgttcaggcagggatgttctcacctgagcttagaacctttaccaaaggtgatgcggagagatgggtaagcacaa
ccaaaaaagccagtgattctgcattctggcttgaggttgaaggtaattccatgaccgcaccaacaggctccaagccaagctttcctgacggaatgttaat
tctcgttgaccctgagcaggctgttgagccaggtgatttctgcatagccagacttgggggtgatgagtttaccttcaagaaactgatcagggatagcggt
caggtgtttttacaaccactaaacccacagtacccaatgatcccatgcaatgagagttgttccgttgtggggaaagttatcgctagtcagtggcctgaag
agacgtttggcgctgcaaacgacgaaaactacgctttagtagcttaataa")); 

Repressor LuxR(
	.Name("LuxR"),
	.Represses("pLux"),
	.Sequence("atgaaaaacataaatgccgacgacacatacagaataattaataaaattaaagcttgtagaagcaataatgatattaatcaatgcttatctgatatgacta
aaatggtacattgtgaatattatttactcgcgatcatttatcctcattctatggttaaatctgatatttcaatcctagataattaccctaaaaaatggag
gcaatattatgatgacgctaatttaataaaatatgatcctatagtagattattctaactccaatcattcaccaattaattggaatatatttgaaaacaat
gctgtaaataaaaaatctccaaatgtaattaaagaagcgaaaacatcaggtcttatcactgggtttagtttccctattcatacggctaacaatggcttcg
gaatgcttagttttgcacattcagaaaaagacaactatatagatagtttatttttacatgcgtgtatgaacataccattaattgttccttctctagttga
taattatcgaaaaataaatatagcaaataataaatcaaacaacgatttaaccaaaagagaaaaagaatgtttagcgtgggcatgcgaaggaaaaagctct
tgggatatttcaaaaatattaggttgcagtgagcgtactgtcactttccatttaaccaatgcgcaaatgaaactcaatacaacaaaccgctgccaaagta
tttctaaagcaattttaacaggagcaattgattgcccatactttaaaaattaataa")); 

Repressor TetR(.Name("TetR"),
	.Represses("pTetR"),
	.Sequence("
		ttatgacaacttgacggctacatcattcactttttcttcacaaccggcacggaactcgctcgggctggccccggtgcattttttaaatacccgcgagaaa
		tagagttgatcgtcaaaaccaacattgcgaccgacggtggcgataggcatccgggtggtgctcaaaagcagcttcgcctggctgatacgttggtcctcgc
		gccagcttaagacgctaatccctaactgctggcggaaaagatgtgacagacgcgacggcgacaagcaaacatgctgtgcgacgctggcgatatcaaaatt
		gctgtctgccaggtgatcgctgatgtactgacaagcctcgcgtacccgattatccatcggtggatggagcgactcgttaatcgcttccatgcgccgcagt
		aacaattgctcaagcagatttatcgccagcagctccgaatagcgcccttccccttgcccggcgttaatgatttgcccaaacaggtcgctgaaatgcggct
		ggtgcgcttcatccgggcgaaagaaccccgtattggcaaatattgacggccagttaagccattcatgccagtaggcgcgcggacgaaagtaaacccactg
		gtgataccattcgcgagcctccggatgacgaccgtagtgatgaatctctcctggcgggaacagcaaaatatcacccggtcggcaaacaaattctcgtccc
		tgatttttcaccaccccctgaccgcgaatggtgagattgagaatataacctttcattcccagcggtcggtcgataaaaaaatcgagataaccgttggcct
		caatcggcgttaaacccgccaccagatgggcattaaacgagtatcccggcagcaggggatcattttgcgcttcagccatacttttcatactcccgccatt
		cagagaagaaaccaattgtccatattgcatcagacattgccgtcactgcgtcttttactggctcttctcgctaaccaaaccggtaaccccgcttattaaa
		agcattctgtaacaaagcgggaccaaagccatgacaaaaacgcgtaacaaaagtgtctataatcacggcagaaaagtccacattgattatttgcacggcg
		tcacactttgctat"));

/*** Ribosome Binding Sites ***/
RBS rbs61100("J61100","tctagaGAAAGAGGGGACAAactagt");
RBS rbs61101("J61101","tctagaGAAAGACAGGACCCactagt");
RBS rbs61102("J61102","tctagaGAAAGATCCGATGTactagt");
RBS rbs61103("J61103","tctagaGAAAGATTAGACAAactagt");
RBS rbs61104("J61104","tctagaGAAAGAAGGGACAGactagt");

/*** Reporters ***/
Reporter GFP("GFP",
"tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcactactagagaaagaggagaaatactagatgcgtaaaggagaagaact
tttcactggagttgtcccaattcttgttgaattagatggtgatgttaatgggcacaaattttctgtcagtggagagggtgaaggtgatgcaacatacgga
aaacttacccttaaatttatttgcactactggaaaactacctgttccatggccaacacttgtcactactttcggttatggtgttcaatgctttgcgagat
acccagatcatatgaaacagcatgactttttcaagagtgccatgcccgaaggttatgtacaggaaagaactatatttttcaaagatgacgggaactacaa
gacacgtgctgaagtcaagtttgaaggtgatacccttgttaatagaatcgagttaaaaggtattgattttaaagaagatggaaacattcttggacacaaa
ttggaatacaactataactcacacaatgtatacatcatggcagacaaacaaaagaatggaatcaaagttaacttcaaaattagacacaacattgaagatg
gaagcgttcaactagcagaccattatcaacaaaatactccaattggcgatggccctgtccttttaccagacaaccattacctgtccacacaatctgccct
ttcgaaagatcccaacgaaaagagagaccacatggtccttcttgagtttgtaacagctgctgggattacacatggcatggatgaactatacaaataataa
tactagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacgctctctactagagtcac
actggctcaccttcgggtgggcctttctgcgtttata");

Reporter YFP("YFP",
"aaagaggagaaatactagatggtgagcaagggcgaggagctgttcaccggggtggtgcccatcctggtcgagctggacggcgacgtaaacggccacaagt
tcagcgtgtccggcgagggcgagggcgatgccacctacggcaagctgaccctgaagttcatctgcaccaccggcaagctgcccgtgccctggcccaccct
cgtgaccaccttcggctacggcctgcaatgcttcgcccgctaccccgaccacatgaagctgcacgacttcttcaagtccgccatgcccgaaggctacgtc
caggagcgcaccatcttcttcaaggacgacggcaactacaagacccgcgccgaggtgaagttcgagggcgacaccctggtgaaccgcatcgagctgaagg
gcatcgacttcaaggaggacggcaacatcctggggcacaagctggagtacaactacaacagccacaacgtctatatcatggccgacaagcagaagaacgg
catcaaggtgaacttcaagatccgccacaacatcgaggacggcagcgtgcagctcgccgaccactaccagcagaacacccccatcggcgacggccccgtg
ctgctgcccgacaaccactacctgagctaccagtccgccctgagcaaagaccccaacgagaagcgcgatcacatggtcctgctggagttcgtgaccgccg
ccgggatcactctcggcatggacgagctgtacaagtaataatactagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgtt
ttatctgttgtttgtcggtgaacgctctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttata");

Reporter RFP(.Name("RFP"));

/*** Terminators ***/
Terminator T1("T1", 
"nagattactataaataggcgtatcacgaggcagaatttcagataaaaaaaatccttagctttcgctaaggatgatttctg
gaattcgcggccgcttctagagccggcttatcggtcagtttcacctgatttacgtaaaaacccgcttcggcgggtttttg
cttttggaggggcagaaagatgaatgactgtccacgacgctatacccaaaagaaatactagtctgcaggcttcctcgctc
actgactcgctgcgctcggtcgttcggctgcggcgagcggtatcagctcactcaaaggcggtaatacggttatccacaga
atcaggggataacgcaggaaagaacatgtgagcaaaaggccagcaaaaggccaggaaccgtaaaaaggccgcgttgctgg
cgtttttccacaggctccgcccccctgacgagcatcacaaaaatcgacgctcaagtcagaggtggcgaaacccgacagga
ctataaagataccaggcgtttccccctggaagctccctcgtgcgctctcctgttccgaccctgccgcttaccggatacct
gtccgcctttctcccttcgggaagcgtggcgctttctcatagctcacgctgtaggtatctcagttcggtgtaggtcgttc
gctccaagctgggctgtgtgcacgaaccccccgttcagcccgaccgctgcgccttatccggtaactatcgtcttgagtcc
aacccggtaagacacgacttatcgccactggcagcagccactggtaacaggattagcagagcgaggtatgtaggcggtgc
tacagagttcttgaagtggtggcctaactacggctacactagaagaacagtatttggtatctgcgctctgctgaagccag
ttaccttcggaaaaagagttggtagctcttgatccggcaaacaaaccaccgctggtagcggtggttttttngtttgcang
cagcaaattacgcgcanaaaaaaagcnaanaaaaaantntttntttttttttnggggnttnnnnccnnggggnaaaaaan
ncccnnnnannnnttttnnnnnnggnantttnnaaangganttccccnnannnctttnnntnaaannnttttttnaannn
nnnnnnttttnnnnnannnannnnnnnnnaannnnncnnnnttnaannngnnnncnttnnnnnngggggnnntttttnnn
nnnnnntttnnnnnccccccnnnnnaannnnncann");

Terminator T7(.Name("T7"));
Terminator BBa_B0010("BBa_B0010",
"nnnncccnnanacnntttttatcccaaannnntaanngaaccctccncgncncccttttnnccannnntttnnccggttn
ttctnnnncngttttttggcgggnaaaaaaagnntattnnnnnnnnntntggggnnnnnnntttttngntnccncccccc
cccgcgcgnntcntntgttatgntgtnctctactntctctcgagagattagtacctttggagatctactagagaaagagg
agaaatactagatggcttcctncgaagacgttatcaaagagttcatgcgtttcaaagttcgtatggaaggttccgttaac
ggtcacgagttcgaaatcgaaggtgaaggtgaaggtcgtccgtacgaaggtacccagaccgctaaactgaaagttaccaa
aggtggtccgctgccgttcgcttgggacatcctgtccccgcagttccagtacggttccaaagcttacgttaaacacccgg
ctgacatcccggactacctgaaactgtccttcccggaaggtttcaaatgggaacgtgttatgaacttcgaagacggtggt
gttgttaccgttacccaggactcctccctgcaagacggtgagttcatctacaaagttaaactgcgtggtaccaacttccc
gtccgacggtccggttatgcagaaaaaaaccatgggttgggaagcttccaccgaacgtatgtacccggaagacggtgctc
tgaaaggtgaaatcaaaatgcgtctgaaactgaaagacggtggtcactacgacgctgaagttaaaaccacctacatggct
aaaaaaccggttcagctgccgggtgcttacaaaaccgacatcaaactggacatcacctcccacaacgaagactacaccat
cgttgaacagtacgaacgtgctgaaggtcgtcactccaccggtgcttaataacgctgatagtgctagtgtagatcgctac
tagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacg
ctctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttatatactagtagcggccgctgcagtccgg
caaaaaagggcaaggtgtcaccaccctgccctttttctttaaaaccgaaaagattacttcgcgttatgcaggcttcctcg
ctcactgactcgctgcgctcggtcgtnngnnngcnnnnnnnnn");