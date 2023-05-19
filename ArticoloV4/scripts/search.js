// Define the path to the pages folder
const pagesFolderPath = "pages/";

// Get the search input element and search results list
const searchInput = document.getElementById("searchInput");
const searchResults = document.getElementById("searchResults");

// Event listener for keyup event on the search input
searchInput.addEventListener("keyup", function () {
    const query = searchInput.value.toLowerCase(); // Get the search query

    // Clear the previous search results
    searchResults.innerHTML = "";

    // Iterate through the pages folder
    for (const page of pages) {
        const pageName = page.toLowerCase();

        // Check if the page name matches the search query
        if (pageName.includes(query)) {
            // Create a list item and anchor element for the search result
            const listItem = document.createElement("li");
            const link = document.createElement("a");
            link.href = pagesFolderPath + page;
            link.textContent = page;

            // Append the anchor element to the list item
            listItem.appendChild(link);

            // Append the list item to the search results list
            searchResults.appendChild(listItem);
        }
    }
});

// Dummy array of page names
const pages = [
    "../index.html",
    "contatti.html",
    "counter.html",

];