const canvas = document.getElementById("gameCanvas") as HTMLCanvasElement;

const ctx = canvas.getContext("2d");
if (!ctx) {
    throw new Error("2D context not supported");
}

// Proof of life 

ctx.fillStyle = "black";
ctx.fillRect(0, 0, canvas.width, canvas.height);
