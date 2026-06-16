import requests
from bs4 import BeautifulSoup

# URL of the webpage
url = "https://example.com"

# Send HTTP request
response = requests.get(url)

# Parse HTML content
soup = BeautifulSoup(response.text, "html.parser")

# Find all h1 tags
headings = soup.find_all("h1")

# Print headings
for heading in headings:
    print(heading.get_text())
