{/* <div class="container">
        <div class="header">
            <p id="heading">Below are auto generated jokes</p>
        </div>
        <h3 id ="jokes">Loading</h3>
        <button class="btn">nextJoke</button>
    </div> */}

const jokes = document.querySelector('#jokes');
const btn = document.querySelector('#btn');

const generateJokes = () => {
    const setHeader =
    {
        headers: {
            Accept: "application/json"
        }
    };
    fetch('https://icanhazdadjoke.com', setHeader)
        .then((res) => {res.json())

        .then((data) => { jokes.innerHTML = data.jokes })

}

btn.addEventListener('click', generateJokes);
generateJokes();