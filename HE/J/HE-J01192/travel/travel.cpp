<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>Î´ÃüÃû1.html</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta name="generator" content="SynEdit HTML exporter" />
<style type="text/css">
<!--
body { color: #000000; background-color: #FFFFFF; }
.cpp1-assembler { color: #0000FF; }
.cpp1-character { color: #000000; }
.cpp1-comment { color: #3399FF; font-style: italic; }
.cpp1-float { color: #800080; }
.cpp1-hexadecimal { color: #800080; }
.cpp1-identifier { color: #000000; }
.cpp1-illegalchar { color: #000000; }
.cpp1-number { color: #800080; }
.cpp1-octal { color: #800080; }
.cpp1-preprocessor { color: #008000; }
.cpp1-reservedword { color: #000000; font-weight: bold; }
.cpp1-space { background-color: #FFFFFF; color: #000000; }
.cpp1-string { color: #0000FF; font-weight: bold; }
.cpp1-symbol { color: #FF0000; font-weight: bold; }
-->
</style>
</head>
<body>
<pre>
<code><span style="font: 10pt Consolas;"><span class="cpp1-preprocessor">#include &lt;iostream&gt;
#include &lt;string&gt;
</span><span class="cpp1-reservedword">using</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">namespace</span><span class="cpp1-space"> std</span><span class="cpp1-symbol">;
</span><span class="cpp1-reservedword">bool</span><span class="cpp1-space"> z </span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">string b</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> string d</span><span class="cpp1-symbol">)
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'D' </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'F'</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">and</span><span class="cpp1-space"> </span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;A&quot;</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;B&quot;</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;C&quot;</span><span class="cpp1-symbol">);
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'D' </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'F'</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">and</span><span class="cpp1-space"> </span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;A&quot;</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;B&quot;</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;C&quot;</span><span class="cpp1-symbol">);
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">1</span><span class="cpp1-symbol">;

</span><span class="cpp1-reservedword">bool</span><span class="cpp1-space"> s</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">string b</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> string d</span><span class="cpp1-symbol">){
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'D'</span><span class="cpp1-reservedword">or</span><span class="cpp1-space"> b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'F'</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">1
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'A' </span><span class="cpp1-reservedword">and</span><span class="cpp1-space"> d </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> 'C'</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">0</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">else</span><span class="cpp1-space"> </span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">1</span><span class="cpp1-symbol">;
}
</span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> main</span><span class="cpp1-symbol">(){
</span><span class="cpp1-space">	freopen</span><span class="cpp1-symbol">(</span><span class="cpp1-character">'travel.in'</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;r&quot;</span><span class="cpp1-symbol">,</span><span class="cpp1-identifier">stdin</span><span class="cpp1-symbol">);
</span><span class="cpp1-space">	freopen</span><span class="cpp1-symbol">(</span><span class="cpp1-character">'travel.out'</span><span class="cpp1-symbol">,</span><span class="cpp1-string">&quot;w&quot;</span><span class="cpp1-symbol">,</span><span class="cpp1-identifier">stdout</span><span class="cpp1-symbol">);
</span><span class="cpp1-space">	sring a</span><span class="cpp1-symbol">,</span><span class="cpp1-identifier">b</span><span class="cpp1-symbol">,</span><span class="cpp1-identifier">c</span><span class="cpp1-symbol">,</span><span class="cpp1-identifier">d</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	cin </span><span class="cpp1-symbol">&gt;&gt;</span><span class="cpp1-space"> a </span><span class="cpp1-symbol">&gt;&gt;</span><span class="cpp1-space"> b </span><span class="cpp1-symbol">&gt;&gt;</span><span class="cpp1-space"> c </span><span class="cpp1-symbol">&gt;&gt;</span><span class="cpp1-space"> d</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">a </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> c</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;1&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">else</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;0&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b</span><span class="cpp1-symbol">(</span><span class="cpp1-number">1</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> </span><span class="cpp1-symbol">==</span><span class="cpp1-space"> d</span><span class="cpp1-symbol">(</span><span class="cpp1-number">1</span><span class="cpp1-symbol">)){
</span><span class="cpp1-space">		cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;1&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">		</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">z</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">b</span><span class="cpp1-symbol">(</span><span class="cpp1-number">2</span><span class="cpp1-symbol">),</span><span class="cpp1-space"> z</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">d</span><span class="cpp1-symbol">(</span><span class="cpp1-number">2</span><span class="cpp1-symbol">)))){
</span><span class="cpp1-space">			cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;1&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">			</span><span class="cpp1-reservedword">if</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">s</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;1&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">			</span><span class="cpp1-reservedword">else</span><span class="cpp1-symbol">(</span><span class="cpp1-identifier">s</span><span class="cpp1-symbol">)</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;0&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">		</span><span class="cpp1-symbol">}</span><span class="cpp1-space"> 
		</span><span class="cpp1-reservedword">else</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;0&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">		
	</span><span class="cpp1-symbol">}
</span><span class="cpp1-space">	</span><span class="cpp1-reservedword">else</span><span class="cpp1-space"> cout </span><span class="cpp1-symbol">&lt;&lt;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;00&quot;</span><span class="cpp1-symbol">;
</span><span class="cpp1-space">	

	
	
	</span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">0</span><span class="cpp1-symbol">;
}
</span></span>
</code></pre>
</body>
</html>