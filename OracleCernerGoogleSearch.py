#cerner_2tothe5th_2022

#InstallBelowPackages
#1.beautifulsoup4
#2.google

#LinkToColab:
#https://colab.research.google.com/drive/1uNHG7FQ6tF7lyYKkCQNqtwPfPIGL7MFQ?usp=sharing

try:
	from googlesearch import search
except ImportError:
	print("No module named 'google' found")

#tosearch
query = "oracle cerner"

for j in search(query, tld="co.in", num=15, stop=15, pause=2):
	print(j)

